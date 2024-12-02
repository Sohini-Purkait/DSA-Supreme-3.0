#include<iostream>
using namespace std;

bool checkSorted(int arr[],int n,int index){
    //base case
    if(index == n-1){
        //single element array is treated as SORTED array
        return true;
    }

    bool currAns = false;
    bool recursionAns = false;

    //1 case
    if(arr[index+1] > arr[index]){
        currAns = true;
    }
    //rest recursion
    recursionAns = checkSorted(arr,n,index+1);

    return(currAns && recursionAns);

    // if(currAns == true && recursionAns == true){
    //     return true;
    // }else{
    //     return false;
    // }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 4;
    int index = 0;

    bool ans = checkSorted(arr,size,index);
    cout << "Array is sorted or not: " << ans << endl;
    return 0;
}