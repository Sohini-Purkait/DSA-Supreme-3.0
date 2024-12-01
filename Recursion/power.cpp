#include<iostream>
using namespace std;

int pow(int n){

    //Base Caase
    if(n == 0){
        return 1;
    }

    //Recursive relation
    int finalAns = 2 * pow(n-1);

    return finalAns;
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << pow(n);
    
    return 0;
}