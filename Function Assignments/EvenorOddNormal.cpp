#include<iostream>
using namespace std;

bool checkEven(int n){
    if(n % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cout << "Enter a number to check even or odd: ";
    cin >> n;
    bool isEven = checkEven(n);

    if(isEven){
        cout << n << " is even." << endl;
    }else{
        cout << n << " is odd." << endl;
    }

    return 0;
}