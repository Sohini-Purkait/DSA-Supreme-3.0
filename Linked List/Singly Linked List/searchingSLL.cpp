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

void searchLL(int target, Node* &head){
    Node* temp = head;
    int pos = 1;
    bool found = false;
    while(temp != NULL){
        if(temp -> data == target){
            cout << "target = " << target << " is present at position : " << pos << endl;
            found = true;
            break;
        }
        temp = temp -> next;
        pos++;
    }
    //yaha tk mtlb kahin pr target nhi mila
    if(!found){
        cout << "target = " << target << " not found!" << endl;
    }
    
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(101, head, tail);
    insertAtTail(102, head, tail);
    insertAtTail(103, head, tail);
    print(head);
    //101->102->103->NULL

    searchLL(103, head);
    searchLL(105, head);
 
    
    return 0;
}