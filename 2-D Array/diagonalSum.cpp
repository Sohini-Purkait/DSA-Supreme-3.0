
#include <iostream>
using namespace std;

int printDiagonalSum(int arr[][3], int rowSize)
{

    int sum = 0;
    for (int row = 0; row < rowSize; row++)
    {
        sum += arr[row][row];
    }
    cout << sum << endl;
}

int main()
{
    int arr[3][3] = {
        {10, 10, 10},
        {20, 20, 20},
        {30, 30, 30}};

    int rowSize = 3;

    printDiagonalSum(arr, rowSize);

    return 0;
}