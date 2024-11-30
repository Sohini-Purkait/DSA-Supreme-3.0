#include<iostream>
using namespace std;

int main(){

    //ineteger -> Stack memeory
    int a = 5;
    cout << a << endl;

    //integer -> Heap memory
    int *p = new int;
    *p = 5;
    cout << *p << endl;

    delete p;  //deallocation in Heap memory


    //array -> stack memory
    int arr[5] = {0};
    cout << arr[0] << arr[1] << arr[2] << endl;

    //array -> heap memory
    int* brr = new int[5];
    cout << brr[0] <<brr[1] << brr[2] <<endl;


    //2D array -> stack memory
    int ar[2][4] = {
                    {2, 4, 6, 8},
                    {1, 2, 3, 4}
                    };

    //2D array -> heap memory (4 rows, 3 cols)
    int** arry = new int*[4];

    for(int i=0; i<4; i++){
        //for each pointer create an 1D array
        arry[i] = new int[3];
    }

    //taking input
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> arry[i][j];
        }
    }
    cout <<endl << "Printing 2D array " << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << arry[i][j] <<' ';
        }
        cout << endl;
    } 

    for(int i=0; i<4; i++){
        delete[] arry[i];
    }

    return 0;
}