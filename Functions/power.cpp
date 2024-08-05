#include<iostream>
using namespace std;

int calculatePower(int a, int b){
    //a to the power b => a*a*a*a*...b times
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int final_ans = calculatePower(2, 3);
    cout << final_ans;
    return 0;
}