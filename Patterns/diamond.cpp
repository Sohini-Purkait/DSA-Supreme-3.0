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

void invertedFullPyramid(int n){
    for(int row = 0; row < n; row++){

        //1. print spaces
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        // 2. print stars
        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }

        cout << endl;
    }
}

void diamond(int n){
    fullPyramid(n/2);
    invertedFullPyramid(n/2);
}

int main(){
    int n;
    cout << "Enter the height of diamond: ";
    cin >> n;
    diamond(n);

    return 0;
}