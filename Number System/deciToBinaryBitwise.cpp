#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){

    //bitwise method
    int binaryNo = 0;
    int i = 0;
    while(n>0){
        // getting bit using bitwise & operator
        int bit = n & 1;
        // reverse the bits obtained
        binaryNo += bit * pow(10, i++);
        n = n >> 1;
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