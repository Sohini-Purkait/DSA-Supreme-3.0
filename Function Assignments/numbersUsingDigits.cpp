#include<iostream>
using namespace std;
int createNumberUsingDigits(int numberOfDigits){
    int num = 0;
    for(int i = 0; i < numberOfDigits; i++){
        int digit;
        cout << "Enter digit " << i+1 << ": ";
        cin >> digit;
        num = num * 10 + digit;
    }
    return num;
}

int main(){
    int numberOfDigits;
    cout << "Enter number of digits: ";
    cin >> numberOfDigits;
    int num = createNumberUsingDigits(numberOfDigits);
    cout << "Number created by digits: " << num << endl;
    return 0;
}