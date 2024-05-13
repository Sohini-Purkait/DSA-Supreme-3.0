#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the height of half pyramid: ";
    cin >> n;

    
    for(int row = 0; row < n; row++){
        int totalColumn = row + 1;
        for(int col = 0; col < totalColumn; col++){
            if(row == 0 || row == n - 1 || col == 0 || row == col){
                cout << col + 1 <<" ";
           }else{
                cout << "  ";
            }        
        }
           cout << endl;
        }
    
    return 0;
}
