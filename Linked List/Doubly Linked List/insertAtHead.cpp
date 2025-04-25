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

    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    insertAtHead(30, head, tail);

    print(head);
    // NULL <-> 30 <-> 20 <-> 10 <-> NULL
    printReverse(tail);
    // NULL <-> 10 <-> 20 <-> 30 <-> NULL
    return 0;
}