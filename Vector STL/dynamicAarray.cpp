#include<iostream>
using namespace std;

void fun(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int *arr = new int[n]; //each element would be zero or garbage
    
    cout << "Enter elements of array:" << endl;
    
    //taking n elements input and inserting in array
    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        arr[i] = data;
    }

    fun(arr, n);
    return 0;
}