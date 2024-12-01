#include<iostream>
using namespace std;

void printCounting(int n){

    //Base Case
    if(n == 0){
        return;
    }

    //Recursive Call
    // cout << n << ",";
    // printCounting(n-1); 

    
    printCounting(n-1); 
    cout << n << ",";
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printCounting(n);
    return 0;
}