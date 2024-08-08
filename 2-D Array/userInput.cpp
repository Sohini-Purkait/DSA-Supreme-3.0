#include<iostream>
using namespace std;

int main(){
    int arr[2][3];
    int rowSize = 2;
    int colSize = 3;

    //taking input -> row-wise
    for(int r = 0; r < rowSize; r++){
        for(int c = 0; c < colSize; c++){
            cout << "Enter the value for (" <<r << ", " << c << ") : ";
            cin >> arr[r][c];
        }
    }

    cout << "printing 2D array: " << endl;
    for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
        for(int colIndex = 0; colIndex < colSize; colIndex++){
            cout << arr[rowIndex] [colIndex] << " ";
        }
        cout << endl;
    } 
    return 0;
}