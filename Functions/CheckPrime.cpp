#include<iostream>
using namespace std;

bool isPrime(int number){
    for(int i = 2; i <= (number - 1); i++){
        if(number % i == 0){
            //not prime
            return false;
        }
    }
    return true;
}

int main(){
    bool ans = isPrime(111);
    if(ans == true){
        cout << "Prime";
    }else{
        cout << "Not prime";
    }
    return 0;
}