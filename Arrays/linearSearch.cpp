#include<iostream>
using namespace std;

bool findTarget(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
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

    int target;
    cout << "Enter the target: ";
    cin >> target;
    bool ans = findTarget(arr, size, target);
    cout << "ans: " << ans << endl;
    return 0;
}