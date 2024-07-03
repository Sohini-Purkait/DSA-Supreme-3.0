#include<iostream>
using namespace std;

void countZerosAndOnes(int arr[], int n){
    int zeroCount = 0;
    int onesCount = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else{
            onesCount++;
        }
    }
    cout << "Zero count = " << zeroCount << endl;
    cout << "One count = " << onesCount << endl;
}

int main(){
    int arr[100];
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    for(int i=0; i<size; i++){
        
        cout << "Enter the element for index: " << i << endl;
        cin >> arr[i];
    }
    countZerosAndOnes(arr, size);
    return 0;
}