#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &s, int count){
    // Base Case
    if(count == 0){
        cout << s.top() << endl;
        return;
    }

    // 1 case solve
    int topElement = s.top();
    s.pop();
    count--;

    // baaki recursion
    printMiddle(s, count);

    // backtrack
    s.push(topElement);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int count = s.size()/2;

    printMiddle(s, count);
    
    return 0;
}