#include<iostream>
using namespace std;

void transposeMatrix(int arr[][3], int rowSize, int colSize){
    
    //1. transpose in same array
    for(int i = 0; i < rowSize; i++){
        for(int j = i; j < colSize; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // //printing array
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    } 
    

    // //2. taking an empty 2D array initialised with 0
    // int ans[100][100] = {0};

    // for(int row = 0; row < rowSize; row++){
    //     for(int col = 0; col < colSize; col++){
    //         ans[row][col] = arr[col][row];
    //     }
    // } 

    // //printing array
    // for(int row = 0; row < rowSize; row++){
    //     for(int col = 0; col < colSize; col++){
    //         cout << ans[row][col] << " ";
    //     }
    //     cout << endl;
    // } 

}

int main(){
    int arr[3][3] = {
                    {10,11,12},
                    {20,21,22},
                    {30,31,32}
                    };

    int rowSize = 3;
    int colSize = 3;

    transposeMatrix(arr,rowSize,colSize);

    return 0;
}