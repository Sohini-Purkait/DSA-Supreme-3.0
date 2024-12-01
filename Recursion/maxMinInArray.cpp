#include<iostream>
#include<climits>
using namespace std;

void maxInArray(int arr[], int size,int index, int &maxi){
    //Base Base
    if(index == size){
        return;
    }
    //Recursive call
    //1 case
    maxi = max(maxi, arr[index]);
    //rest recursion
    maxInArray(arr,size, index+1, maxi);
}

void minInArray(int arr[], int size,int index, int &mini){
    //Base Base
    if(index == size){
        return;
    }
    //Recursive call
    //1 case
    mini = min(mini, arr[index]);
    //rest recursion
    minInArray(arr,size, index+1, mini);
}

int main(){
    int arr[] = {10,30,40,50,20,60};
    int size = 6;
    int index = 0;

    int maxi = INT_MIN;
    maxInArray(arr,size,index,maxi);
    cout << "Max no-> " << maxi << endl;

    int mini = INT_MAX;
    minInArray(arr,size,index,mini);
    cout << "Min no-> " << mini << endl;
    
    return 0;
}