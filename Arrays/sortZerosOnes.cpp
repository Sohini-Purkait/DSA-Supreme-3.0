#include<iostream>
#include<algorithm>
using namespace std;

void sortZeroOne(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;

    //counting
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
    }

    //insertion
    int i = 0;
    for(; i < zeroCount; i++){
        arr[i] = 0;
    }
    for(; i < n; i++){
        arr[i] = 1;
    }

    // or
    // fill(arr, arr+zeroCount, 0);
    // fill(arr+zeroCount, arr+n, 1);
}

int main(){
     int arr[] = {0,1,1,1,0,0,1};
    int size = 7;

    //1. use inbuilt sort
    // sort(arr, arr+size);

    sortZeroOne(arr,size);
    //printing array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}