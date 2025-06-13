#include<iostream>
using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top;

        // constructor
        Stack(int capacity){
            arr = new int[capacity](); // () array initialized with 0
            size = capacity;
            top = -1;
        }
        
        void push(int val){
            if(top == size-1){
                // stack is already full, insert kroge toh overflow hojaega
                cout << "Stack Overflow" << endl;
            }else{
                // normal case -> stack me khali jagah hai abhi
                top++;
                arr[top] = val;
            }
        }

        void pop(){
            if(top == -1){
                // stack is empty, no element to pop
                cout << "Stack Underflow" << endl;
            }else{
                // normal case
                arr[top] = 0; //optional step, not mandatory
                top--;
            }
        }

        int getSize(){
            return top+1;
        }
        
        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }

        int getTop(){
            if(top == -1){
                cout << "There is no element at the top, as stack is empty" << endl;
                return -1;
            }else{
                // normal case
                return arr[top];
            }
        }

        void print(){
            cout << "Printing Stack:" << endl;
            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }cout << endl;
        }
};

int main(){
    // creating a stack of initial size 5
    Stack s(5);
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    s.push(60);
    s.print();

    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;

    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();

    return 0;
}