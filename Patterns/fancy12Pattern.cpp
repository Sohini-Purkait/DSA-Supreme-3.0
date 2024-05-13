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

int main(){
    int n;
    cout << "Enter the height of fancy 1 2 pattern: ";
    cin >> n;
    fancy12Pattern(n);
    return 0;
}