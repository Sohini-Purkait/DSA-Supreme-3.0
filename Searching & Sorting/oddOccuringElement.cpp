#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[],int size){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        //single element
        if(s==e){
            return s;
        }

        // if(mid & 1){
        //     //mid is a odd index
        //     if(arr[mid] == arr[mid-1]){
        //         //first element is at even number
        //         //i am standing at left part
        //         //ans exists in right direction
        //         s = mid + 1;
        //     }else{
        //         e = mid - 1;
        //     }
        // }



        
        int leftValue = -1;
        int rightValue = -1;
        int currentValue = arr[mid];
        if(mid-1 >= 0){
            leftValue = arr[mid-1];
        }
        if(mid+1 < size){
            rightValue = arr[mid+1];
        }

        //duplicate does not exist
        if(currentValue != leftValue && currentValue != rightValue){
            return currentValue;
        }
        //duplicate exist in left wala index
        if(mid-1 >= 0 && currentValue == leftValue ){
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1){
                //pairStartingIndex is odd
                //i am standing at right part
               //ans exists in left direction
               e = mid - 1;
               
            }else{
                s = mid + 1;
            }
        }
        //duplicate exist in right wala index
        else if(mid+1 < size && currentValue == rightValue){
            int pairStartingIndex = mid;
            if(pairStartingIndex & 1){
                //pairStartingIndex is odd
                //i am standing at right part
               //ans exists in left direction
               e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[] = {1,1,2,2,3,3,4,4,5,6,6,4,4,2,2};
    int size = 15;

    int ans = findOddOccuringElement(arr,size);
    cout << "ans index: " << ans << endl;
    cout << "ans element: " << arr[ans] << endl;
    return 0;
}