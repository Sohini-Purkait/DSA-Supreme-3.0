#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation
    stack<int> st;

    //insertion
    st.push(10); //10,
    st.push(20); //10,20
    st.push(30); //10,20,30

    cout << st.size() << endl;
    st.pop(); //10,20
    st.pop(); //10
    cout << st.top() << endl;

    if(st.empty() == true){
        cout << "Stack is empty." << endl;
    }else{
        cout << "Stack is not empty." << endl;
    }
    
    return 0;
}