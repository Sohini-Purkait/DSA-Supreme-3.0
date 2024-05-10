#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){

    //division method
    int binaryNo = 0;
    int i = 0;
    while(n>0){
        // getting remainder
        int bit = n%2;
        // reverse remainder bits
        binaryNo += bit * pow(10, i++);
        n = n/2;
    }

    return binaryNo;
}

int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    int binary = decimalToBinary(n);
    cout<<"Binary equivalent of "<<n<<" is: "<<binary<<endl;
    return 0;
}