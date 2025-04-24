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

//funtion to insert at tail
void insertAtTail(int value, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        //LL is empty
        //steps: create node, head on that node, tail on that node
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;

    }else{
        //LL is not empty
        // step1: create node
        Node* newNode = new Node(value);
        //step2: tail node ko new node se connect karo
        tail -> next = newNode;
        //step3: update tail
        tail = newNode;
    }
    
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    //LL is empty
    insertAtTail(101, head, tail);
    print(head);
    //101->NULL
    insertAtTail(102, head, tail);
    print(head);
    //101->102->NULL
    insertAtTail(103, head, tail);
    print(head);
    //101->102->103->NULL
 
    
    return 0;
}