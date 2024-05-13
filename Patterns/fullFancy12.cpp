#include<iostream>
using namespace std;

void fancy12Pattern(int n){
    for(int row = 0; row < n; row++){
      for(int col = 0; col < 2*row+1; col++){
         // print numbers for even indexed columns
         if(col % 2 == 0){
           cout << row + 1;
         }else{
            cout <<"*";
         }
      } 
      cout << endl; 
    }
}

void invertedFancy12Pattern(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2*(n-row)-1; col++){
            if(col % 2 == 0){
                cout << n - row;
            }else{
                cout << "*";
            
            }
        }
        cout << endl;
    }
}

void fullFancy12(int n){
    fancy12Pattern(n);
    invertedFancy12Pattern(n-1);
}


int main(){
    int n;
    cout << "Enter the height of fancy 1 2 pattern: ";
    cin >> n;
    fullFancy12(n);

    return 0;
}