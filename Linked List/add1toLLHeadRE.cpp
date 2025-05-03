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

void solve(Node* head, int& carry){
    if(!head) return; 
    solve(head -> next, carry); //head RE

    // 1 case
    int sum = head -> data + carry;
    int digit = sum % 10;
    carry = sum / 10;
    head -> data = digit;
}

Node* add1(Node* head,int &carry){
    solve(head, carry);
    if(carry){
        Node* newHead = new Node(carry);
        newHead -> next = head;
        head  = newHead;
    }
    return head;
}

int main(){
    Node* head = new Node(9);
    head -> next = new Node(9);
    head -> next -> next = new Node(9);
    
    print(head);
    int carry = 1;
    head = add1(head, carry);
    print(head);
    
    return 0;
}