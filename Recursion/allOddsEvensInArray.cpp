#include<iostream>
using namespace std;

void printAllOdds(int arr[], int n, int index){
    //Base Case
    if(index == n){
        return;
    }

    //1 case
    if((arr[index]) & 1){
        cout << arr[index] << " ";
    }
    //baaki recursion
    printAllOdds(arr, n, index+1);
}

void printAllEvens(int arr[], int n, int index){
    //Base Case
    if(index == n){
        return;
    }

    //1 case
    if( !(arr[index]&1) ){
        cout << arr[index] << " ";
    }
    //baaki recursion
    printAllEvens(arr, n, index+1);
}

int main(){
    int arr[] = {10, 11, 12, 13, 14, 15, 16};
    int size = 7;
    int index = 0;
    cout << "Printing all odds: ";
    printAllOdds(arr,size,index);
    cout << endl;
    cout << "Printing all evens: ";
    printAllEvens(arr,size,index);
    
    return 0;
}