#include<iostream>
using namespace std;

int countSetBit(int n){

    // normal method
    // int count = 0;
    // while(n > 0){
    //     int bit = n % 2;
    //     if(bit == 1){
    //         count++;
    //     }
    //     n /= 2;
    // }
    // return count;

    // bitwise method
    int count = 0;
    while(n){
        int bit = n & 1;
        if(bit){
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int setBitCount = countSetBit(n);
    cout << "The number of set bit is: " << setBitCount <<endl;
    return 0;
}