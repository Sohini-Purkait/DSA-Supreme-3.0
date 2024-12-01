#include<iostream>
using namespace std;

int getfactorial(int n){

    //Base Case
    if(n == 0 || n == 1){
        return 1;
    }

    //Recursive call
    int finalAns = n * getfactorial(n-1);
    return finalAns;

}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = getfactorial(n);
    cout << "The factorial of " << n << " is " << ans << endl;

    return 0;
}