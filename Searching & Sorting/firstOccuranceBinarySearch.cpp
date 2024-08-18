#include<iostream>
using namespace std;

void findFirstOccurrene(int arr[], int n, int target, int &ansIndex){   //&ansIndex -> pass by refence change in actual variable
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            //ans found-> may or may not be first occurence
            //store and compute

            ansIndex = mid;

            //first occurence -> go left
            e = mid - 1;
        }
        if(target > arr[mid]){
            //go right
            s = mid + 1;
        }
        if(target < arr[mid]){
            //go left
            e = mid - 1;
        }
        mid = s + (e-s)/2; //dont forget to update mid
    }
}

int main(){
    
    int arr[] = {20,20,20,20,20,20,20,30,40,50,60};
    int n = 11;
    int target = 20;
    int ansIndex = -1; //means target not found

    findFirstOccurrene(arr,n,target,ansIndex);
    cout << "first Occ index: " << ansIndex << endl;

    return 0;
}