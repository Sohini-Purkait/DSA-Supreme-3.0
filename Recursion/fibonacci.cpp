#include<iostream>
using namespace std;

int fib(int n){

    //Base Case
    if(n == 0 || n == 1){
        return n;
    }
    
    //Recursive call
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << fib(n);
    return 0;
}