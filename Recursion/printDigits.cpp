#include<iostream>
using namespace std;

void printDigits(int n){
    //Base Case
    if(n == 0){
        return ;
    }

    //Rest Cases
    int newNumber = n / 10;
    printDigits(newNumber);

    //1 Case
    int digit = n % 10;
    cout << digit << " ";
    
}

int main(){
    int n = 126794;
    printDigits(n);
    
    return 0;
}