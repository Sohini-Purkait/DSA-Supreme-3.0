#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool> Sieve(int n){
    //create a sieve array of N size telling isPrime.
    vector<bool>sieve(n+1, true);
    sieve[0]=sieve[1]=false;

    for(int i=2; i<= sqrt(n); i++){  //or for(int i=2; i*i<= n; i++)   optimising outer loop 
        if(sieve[i] == true){
            // int j = i*2;
            int j = i*i;    //optimising inner loop
            while(j <= n){
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

int main(){
    vector<bool>sieve = Sieve(25);
    for(int i=0; i<=25; i++){
        if(sieve[i]){
            cout << i << " ";
        }
    }
    return 0;
}