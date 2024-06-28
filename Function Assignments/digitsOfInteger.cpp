#include<iostream>
using namespace std;

void printAllDigits(int n){
    while(n){  //when n is nonzero, print
        int onesPlaceDigit = n % 10;
        cout <<"Digit: "<<onesPlaceDigit <<endl;
        n /= 10;
    }
}

int main(){
    int n;
    cout << "Enter an Integer to see its digits: ";
    cin >> n;
    printAllDigits(n);

    return 0;
}