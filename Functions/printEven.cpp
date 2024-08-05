#include<iostream>
using namespace std;

void printEvenInsideRange(int start, int end){
    for(int i = start; i <= end; i++){
        int n = i;
        if(!(n&1)){
            cout << n << endl;
        }
    }
}

void printOddInsideRange(int start, int end){
    for(int i = start; i <= end; i++){
        int n = i;
        if(n&1){
            cout << n << endl;
        }
    }
}

int main(){
    printEvenInsideRange(101,123);
    printOddInsideRange(101,123);
    return 0;
}