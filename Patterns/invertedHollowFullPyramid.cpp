#include<iostream>
using namespace std;

void invertedHollowFullPyramid(int n){
    for(int row = 0; row < n; row++){

        //1. print spaces
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        // 2. print stars
        for(int col = 0; col < n - row; col++){
            if(row==0 || row==n-1 || col==0 || col==n-row-1){
                cout << "* ";
            }else{
                cout << "  ";          
            
            }
        }

        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;
    invertedHollowFullPyramid(n);

    return 0;
}