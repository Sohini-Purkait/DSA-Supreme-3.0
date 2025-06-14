#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;

bool checkSorted(stack<int> &s, int element1){
    // base case
    if(s.empty()){
        // means stack is completely compared and its sorted
        return true;
    }

    // 1 case
    int element2 = s.top();
    s.pop();
    if(element2 < element1){
        // iska mtlb aage check kr skte h
        bool aageKaAns = checkSorted(s, element2);
        // backtrack
        s.push(element2);
        return aageKaAns;

    }else{
        // iska mtlb sorted nhi h, aage check krne ki need nhi h
        return false;
    }
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int element1 = INT_MAX;
    cout << checkSorted(s, element1) << endl;

    return 0;
}