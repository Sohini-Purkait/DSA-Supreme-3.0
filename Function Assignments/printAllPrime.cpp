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
    cout << "Enter a number: ";
    cin >> n;
    cout << "All Prime numbers between 1 to "<< n << " is: ";
    
    for(int i = 2; i <= n; i++){
        bool isiPrime = checkPrime(i);
        if(isiPrime){
        cout << i << " ";
        }
    }


    return 0;
}