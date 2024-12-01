#include<iostream>
using namespace std;

void printArray(int arr[],int size,int index){

    //Base Case
    if(index == size){
        //array se bahar aagye ho
        return;
    }

    //Recursive relation
    //1 case main solve karunga
    cout << arr[index] << " ";
    //baaki recursion sambhal  lega
    printArray(arr, size, index+1);

}

int main(){
    
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    printArray(arr, size, index);

    return 0;
}