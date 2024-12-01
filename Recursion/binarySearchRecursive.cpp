#include<iostream>
using namespace std;

int binarySearchRecursive(int arr[], int n, int s, int e, int target){
    
    //BaseCase
    if(s > e){
        return -1;
    }

    //1 case
    int mid = (s+e)/2;
    if(arr[mid] == target){
        return mid;
    }

    //baaki recursion
    if(target > arr[mid]){
        //right
        return  binarySearchRecursive(arr, n, mid+1, e, target);
    }else{
        //left
        return  binarySearchRecursive(arr, n, s, mid-1, target);
    }
   
}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    int target = 70;
    int s = 0;
    int e = size-1;
    int ans = binarySearchRecursive(arr,size,s,e,target);
    cout << "Ans index: " << ans << endl; 

    
    return 0;
}