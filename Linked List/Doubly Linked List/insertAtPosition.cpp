#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int value, Node* &head, Node* &tail){
    //2 cases -> LL is empty / non-empty
    //empty wala case
    if(head == NULL && tail == NULL){
        //iska mtlb, main first node create krne wala hu
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        //LL is not empty
        Node* newNode = new Node(value);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
}

void insertAtTail(int value, Node* &head, Node* &tail){
    //2 cases -> LL is empty / non-empty
    //empty wala case
    if(head == NULL && tail == NULL){
        //iska mtlb, main first node create krne wala hu
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        //LL is not empty
        Node* newNode = new Node(value);
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    //3cases -> leftmost, rightmost, middle
    int len = getLength(head);
    if(position == 1){
        //insert leftmost me krna chahta hu
        insertAtHead(value, head, tail);
    }
    else if(position == len+1){
        //right most end pr insert krna chahta hu
        insertAtTail(value, head, tail);
    }else{
        //middle me kisi position pr insert krna chahta hu
        Node* temp = head;
        for(int i = 0; i < position - 2; i++){
            temp = temp -> next;
        }
        Node* newNode = new Node(value);
        Node* forward = temp -> next;
        temp -> next = newNode;
        newNode -> prev = temp;
        newNode -> next = forward;
        forward -> prev = newNode;
    }
}

void print(Node* head){
    Node* temp = head;
    cout << "NULL <-> ";
    while(temp != NULL){
        cout << temp -> data << " <-> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

void printReverse(Node* tail){
    Node* temp = tail;
    cout << "NULL <-> ";
    while(temp != NULL){
        cout << temp -> data << " <-> ";
        temp = temp -> prev;
    }
    cout << "NULL" << endl;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(10, head, tail);
    insertAtTail(20, head, tail);
    insertAtTail(30, head, tail);

    print(head);
    // NULL <-> 10 <-> 20 <-> 30 <-> NULL
    
    insertAtPosition(3, 420, head, tail);
    print(head);
    // NULL <-> 10 <-> 20 <-> 420 <-> 30 <-> NULL
    insertAtPosition(1, 500, head, tail);
    print(head);
    // NULL <-> 500 <-> 10 <-> 20 <-> 420 <-> 30 <-> NULL
    insertAtPosition(6, 340, head, tail);
    print(head);
    // NULL <-> 500 <-> 10 <-> 20 <-> 420 <-> 30 <-> 340 <-> NULL
    return 0;
}