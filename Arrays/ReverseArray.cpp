#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int n){
    int l = 0;
    int h = n-1;

    while(l < h){
        // swap(arr[l], arr[h]);
        // l++;
        // h--;

        //pro ki trh code
        while(l < h){
            swap(arr[l++], arr[h--]);
        }
    }
}

int main(){
    int arr[8] = {10,20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    // M1. 2pointer approach
    // reverseArray(arr, n);

    //M2. STL, C++ lib
    reverse(arr, arr+n); //include header #include<algorithm>

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}