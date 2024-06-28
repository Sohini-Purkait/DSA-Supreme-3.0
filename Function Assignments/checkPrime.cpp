#include<iostream>
using namespace std;

bool checkPrime(int n){
    int i = 2;
    for(i = 2; i <= n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}



int main(){
    int n;
    cout << "Enter a number to check prime or not: ";
    cin >> n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << n << " is a prime number." << endl;
    }else{
        cout << n << " is composite number." << endl;
    }


    return 0;
}