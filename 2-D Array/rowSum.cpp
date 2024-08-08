#include<iostream>
using namespace std;

int printRowSum(int arr[][4], int rowSize, int colSize){
    for(int row = 0; row < rowSize; row++){
        int sum = 0;
        for(int col = 0; col < colSize; col++){
            sum += arr[row][col];
        }
        cout << sum << endl;
    }   
}




int main(){
    int arr[3][4] = {
                    {10,10,10,10},
                    {20,20,20,20},
                    {30,30,30,30}
                    };

    int rowSize = 3;
    int colSize = 4;

    printRowSum(arr,rowSize,colSize);

    

    return 0;
}