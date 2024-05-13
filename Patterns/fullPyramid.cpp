#include<iostream>
using namespace std;

void fullPyramid(int n){
    for(int row = 0; row < n; row++){
        //1. print spaces
        for(int col = 0; col < n - row - 1; col++){
            cout << " ";
        }

        //2. print stars
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
         
    }
}

int main(){
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;
    fullPyramid(n);

    return 0;
}