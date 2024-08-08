#include<iostream>
using namespace std;

int main(){
    //declaring 2D array
    // int arr[3][3];

    //initialise
    // int arr[3][2] = {10, 20, 30, 40, 50 60};

    int arr[3][2] = {
                    {10, 20},
                    {30, 40},
                    {50, 60}
                    };

    cout << arr[0][1] << endl;

    // //row-wise traversal
    // int rowSize = 3;
    // int colSize = 2;
    // for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
    //     for(int colIndex = 0; colIndex < colSize; colIndex++){
    //         cout << arr[rowIndex] [colIndex] << " ";
    //     }
    //     cout << endl;
    // }

    //col-wise traversal
    int rowSize = 3;
    int colSize = 2;
    for(int colIndex = 0; colIndex < colSize; colIndex++){
        for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }

    // //diagonal traversal->Sq. Matrix
    // int rowSize = 3;
    // int colSize = 2;
    // for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
    //     for(int colIndex = 0; colIndex < colSize; colIndex++){
    //         if(rowIndex == colIndex){
    //             cout << arr[rowIndex] [colIndex] << " ";
    //         }    
    //     }
    //     cout << endl;
    // }

    //diagonal traversal of sq matrix using single loop
    // for(int i = 0; i < rowSize; i++){
    //     cout << arr[i][i] << " ";
    // }


    return 0;
}
