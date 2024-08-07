#include<iostream>
using namespace std;

void printAllPairTwoSum(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] + arr[j] == target){
                //found a pair that sums to target
                cout << arr[i] <<", " << arr[j] << endl;
            }
        }
    }
    return;
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    printAllPairTwoSum(arr,n,60);
    
    return 0;
}