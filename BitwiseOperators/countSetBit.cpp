#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int setBitCount = 0;

    while(number != 0){
        int lastBit = (number & 1);
        if(lastBit == 1){
            setBitCount++;
        }
        number = number >> 1;
    }
    

    cout << "Total set bit: " << setBitCount << endl;

    return 0;
}