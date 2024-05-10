#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n){

    // bitwise method
    int decimalNo = 0;
    int i = 0;
    while(n>0){
        // getting bits
        int bit = n & 1;
        // reverse remainder bits
        decimalNo += bit * pow(2, i++);
        n = n / 10;
    }

    return decimalNo;
}

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int decimal = binaryToDecimal(n);
    cout<<"Binary equivalent of "<<n<<" is: "<<decimal<<endl;
    return 0;
}