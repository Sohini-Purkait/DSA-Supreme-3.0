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
void insertAtHead(int value, Node* &head, Node* &tail){
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

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    //assume -> valid positions input
    int length = getLength(head);
    if(position == 1){
        // insert at head krna chahta hu
        insertAtHead(value, head, tail);
    }
    else if(position == length + 1){
        //insert at tail krna chahta hu 
        insertAtTail(value, head, tail);
    }else{
        //insert in between karna chahta hu
        Node* temp = head;
        for(int i=0; i < position-2; i++){
            temp = temp -> next;
        }
        Node* newNode = new Node(value);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}

void deleteNodeFromLL(int position, Node* &head, Node* &tail){
    //if LL is empty, we can not delete
    if(head == NULL && tail == NULL){
        cout << "No node to delete" << endl;
        return;
    }
    //single node in LL
    if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }

    //multiple nodes in LL
    //2 case
    // 1st case -> delete first node
    if(position == 1){
        Node* temp = head;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        //any other node except the first node
        Node* prev = head;
        for(int i = 0; i < position-2; i++){
            prev = prev -> next;
        }
        Node* curr = prev -> next;
        Node* forward = curr -> next;
        prev -> next = forward;
        curr -> next = NULL;
        delete curr;

    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtTail(101, head, tail);
    insertAtTail(102, head, tail);
    insertAtTail(103, head, tail);

    insertAtPosition(1, 42, head, tail);
    insertAtPosition(5, 57, head, tail);
    insertAtPosition(3, 420, head, tail);
    print(head);
    // 42->101->420->102->103->57->NULL

    deleteNodeFromLL(1, head, tail);
    print(head);
    // 101->420->102->103->57->NULL

    deleteNodeFromLL(3, head, tail);
    print(head);
    // 101->420->103->57->NULL

    deleteNodeFromLL(4, head, tail);
    print(head);
    // 101->420->103->NULL

    
    return 0;
}