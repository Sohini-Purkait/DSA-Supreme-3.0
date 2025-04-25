#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    //constructor
    Node(int value){
        this -> data = value;
        this -> next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    //jab tk temp NULL k equal nhi h, tab tk node print krte rho
    while(temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;  //temp++
    }
    cout << "NULL" << endl;
}

//function to insert at head -> returns head of LL after insertion
Node* insertAtHead(int value, Node* &head, Node* &tail){
    // LL is empty -> head and tail both pointing to NULL
    // it means we are creating first node of LL
    if(head == NULL && tail == NULL){
        // step1: create a new node
        Node* newNode = new Node(value);
        // step2: head ko newNode pr lagado
        head = newNode;
        // step3: tail ko newNode pr lagado
        tail = newNode;
    }else{
        //LL is not empty
        //pehle se node present hai
        //insert at head
        // step1: create node
        Node* newNode = new Node(value);
        // step2: connect this newNode to head node
        newNode -> next = head;
        // step3: head update kro
        head = newNode;
    }
    
    return head;
}

int main(){
    // //stack
    // // Node first;
    // //dynamic memory
    // Node* first = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    //LL is empty
    head = insertAtHead(10, head, tail);
    print(head);
    //10->NULL
    head = insertAtHead(20, head, tail);
    print(head);
    //20->10->NULL
    head = insertAtHead(30, head, tail);
    print(head);
    //30->20->10->NULL
    
    
    return 0;
}