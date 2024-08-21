#include<iostream>
using namespace std;

int applyBinarySearch(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid+1] == target){
            return mid+1;
        }
        if(arr[mid-1] == target){
            return mid-1;
        }
        if(target < arr[mid]){
            //left
            e = mid - 2; //e = mid - 1; 
        }else{
            //right
            s = mid + 2; //s = mid + 1;
        }

        mid = s+(e-s)/2;
    }
    return -1;
    
}

int main(){
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = 7;
    int target = 40;

    int ans = applyBinarySearch(arr,size,target);
    cout << "Found at Index: " << ans << endl;
    return 0;
}