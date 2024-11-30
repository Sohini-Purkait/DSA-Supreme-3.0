#include<iostream>
using namespace std;

// int solve(int arr[], int size){
int solve(int *arr, int size){
    cout << sizeof(arr) << endl; //ans is 4 not(6*2= 12) since array is passed as pointer in the function
    
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 5;
    solve(arr,size);
    return 0;
}