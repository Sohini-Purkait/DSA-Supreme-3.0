#include<iostream>
using namespace std;


int fastExponentiation(int a, int b){
    int ans = 1;
    while(b > 0){
        if(b & 1){
            // odd
            ans = ans * a;   
        }

        a = a * a;
        b >>= 1; // right shift (b/2)
    }
    return ans; // return the result
}    // O(log b)

int slowExponentiation(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans *= a;
    }
    return ans;
} //o(b)

int main(){
    cout << slowExponentiation(5,4) << endl;
    cout << fastExponentiation(5,4) << endl;
    return 0;
}