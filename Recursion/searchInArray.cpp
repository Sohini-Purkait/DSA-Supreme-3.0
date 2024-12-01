#include<iostream>
using namespace std;

bool searchInArray(int arr[], int size, int index, int target){
    //2 Base Case -> found / not found
    //not found
    if(index >= size){
        //invalid index -> out of bound of array
        return false;
    }
    //found -> 1 case
    if(arr[index] == target){
        return true;
    }

    //Recursive Relation -> rest cases
    bool ans = searchInArray(arr,size,index+1,target);
    return ans;
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    int target = 50;
    cout << searchInArray(arr,size,index,target) << endl;
    
    return 0;
}