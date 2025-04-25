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

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
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

void deleteFromPosition(int position, Node* &head, Node* &tail){
    int length = getLength(head);
    //LL is empty
    if(head == NULL && tail == NULL){
        cout << "No nodes to delete" << endl;
        return;
    }
    else if(head == tail){
        //single node to delete
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if(position == 1){
        //we want to delete head node
        Node* temp = head;
        head = head -> next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp; 
    }
    else if(length == position){
        // we want to delete tail node
        Node* temp = tail;
        tail = temp -> prev;
        tail -> next = NULL;
        temp -> prev = NULL;
        delete temp;
    }else{
        //we want to delete any node other than head
        Node* backward = head;
        for(int i = 0; i < position - 2; i++){
            backward = backward -> next;
        }
        Node* curr = backward -> next;
        Node* forward = curr -> next;

        //pointers change
        backward -> next = forward;
        forward -> prev = backward;

        //curr ko isolate karna hai
        curr -> prev = NULL;
        curr -> next = NULL;
        //curr isolate ho chuka hai
        delete curr;
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
    insertAtTail(40, head, tail);
    insertAtTail(50, head, tail);

    print(head);
    // NULL <-> 10 <-> 20 <-> 30 <-> 40 <-> 50 <-> NULL

    deleteFromPosition(1, head, tail);
    print(head);
    // NULL <-> 20 <-> 30 <-> 40 <-> 50 <-> NULL

    deleteFromPosition(2, head, tail);
    print(head);
    // NULL <-> 20 <-> 40 <-> 50 <-> NULL

    deleteFromPosition(3, head, tail);
    print(head);
    // NULL <-> 20 <-> 40 <-> NULL
    
    return 0;
}