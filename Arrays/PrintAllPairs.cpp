#include<iostream>
using namespace std;

void printAllPairs(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    printAllPairs(arr,n);
    
    return 0;
}