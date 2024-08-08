#include<iostream>
using namespace std;

int printColSum(int arr[][4], int rowSize, int colSize){
    for(int col = 0; col < colSize; col++){
        int sum = 0;
        for(int row = 0; row < rowSize; row++){
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

    printColSum(arr,rowSize,colSize);

    

    return 0;
}