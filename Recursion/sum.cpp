#include<iostream>
using namespace std;

int getSum(int n){
    //Base Case
    if(n == 1){
        return n;
    }

    //Recursive call
    int ans = getSum(n-1) + n;
    return ans;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << getSum(n);
    
    return 0;
}