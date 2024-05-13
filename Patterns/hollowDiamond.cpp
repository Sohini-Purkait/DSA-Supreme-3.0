#include<iostream>
using namespace std;

void hollowPyramid(int n){
    for(int row = 0; row < n; row++){
        //1. print spaces
        for(int col = 0; col < n - row - 1; col++){
            cout << " ";
        }

        //2. print stars
        for(int col = 0; col < row + 1; col++){
            if(row==0 || col==0 || col==row){
                cout << "* ";
            }else{
                cout << "  ";          
            }
            
        }
        cout << endl;
         
    }
}

void invertedHollowFullPyramid(int n){
    for(int row = 0; row < n; row++){

        //1. print spaces
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        // 2. print stars
        for(int col = 0; col < n - row; col++){
            if(col==0 || col==n-row-1){
                cout << "* ";
            }else{
                cout << "  ";          
            
            }
        }

        cout << endl;
    }
}

void hollowDiamond(int n){
    hollowPyramid(n/2);
    invertedHollowFullPyramid(n/2);
}

int main(){
    int n;
    cout << "Enter the height of hollow diamond: ";
    cin >> n;
    hollowDiamond(n);

    return 0;
}