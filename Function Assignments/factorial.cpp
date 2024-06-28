#include<iostream>
using namespace std;

long long int fact(long long int n){
    long long int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long int ans = fact(n);
    cout <<"factorial of " << n << " is " << ans << endl;

    return 0;
}