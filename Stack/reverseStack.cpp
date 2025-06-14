#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& s, int val){
    
    // base case
    if(s.empty()){
        s.push(val);
        return;
    }

    // 1 case solve
    int topE = s.top();
    s.pop();

    // recusrion
    insertAtBottom(s, val);

    // backtrack
    s.push(topE);
}

void reverseStack(stack<int> &s){
    // base case
    if(s.empty()){
        return;
    }

    // 1 case
    int topE = s.top();
    s.pop();

    // baaki recursion
    reverseStack(s);

    // jab wapas aaunga (backtrack)
    insertAtBottom(s, topE);
    
}

void print(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }cout << endl;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Before: " << endl;
    print(s);
    reverseStack(s);
    cout << "After: " << endl;
    print(s);

    return 0;
}