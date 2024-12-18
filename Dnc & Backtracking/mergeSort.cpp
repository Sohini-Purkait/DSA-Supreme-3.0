#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid) {

    //create left and right arrays
    int leftLength = mid - s + 1;
    int rightLength = e - mid;
    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    //fill or copy the left and right arrays
    //copy original array -> values
    //original array ka starting index

    int index = s;
    //copying into left array
    for (int i = 0; i < leftLength; i++) {
        leftArr[i] = arr[index];
        index++;
    }
    index = mid + 1;
    //copying into left array
    for (int i = 0; i < rightLength; i++) {
        rightArr[i] = arr[index];
        index++;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < leftLength && rightIndex < rightLength) {
        if (leftArr[leftIndex] < rightArr[rightIndex]) {
            arr[mainArrayIndex] = leftArr[leftIndex];
            leftIndex++;
        } else {
            arr[mainArrayIndex] = rightArr[rightIndex]; // Corrected
            rightIndex++;
        }
        mainArrayIndex++;
    }

    //2 cases if elements are still left after comparison
    while (leftIndex < leftLength) {
        arr[mainArrayIndex] = leftArr[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }
    while (rightIndex < rightLength) {
        arr[mainArrayIndex] = rightArr[rightIndex]; // Corrected
        rightIndex++;
        mainArrayIndex++;
    }

    //delete heap memory
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int s, int e) {
    //base case
    if (s >= e) { //(single element already sorted)
        return;
    }
    int mid = (s + e) / 2;
    //solve left part using recursion
    mergeSort(arr, s, mid);
    //solve right part using recursion
    mergeSort(arr, mid + 1, e);
    //merge two parts
    merge(arr, s, e, mid);
}

int main() {
    int arr[] = {10, 80, 110, 90, 50, 30, 40, 20};
    int size = 8;
    int s = 0;
    int e = size - 1;
    cout << "Before: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, s, e);
    
    //printing entire sorted array
    cout << "After: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}