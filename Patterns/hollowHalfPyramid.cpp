#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the height of half pyramid: ";
    cin >> n;

    // Method 2
    for(int row = 0; row < n; row++){
        int totalColumn = row + 1;
        for(int col = 0; col < totalColumn; col++){
            if(row == 0 || row == n - 1 || col == 0 || row == col){
                cout << "* ";
           }else{
                cout << "  ";
            }        
        }
           cout << endl;
        }
    





    //Method 1

    // for(int row = 0; row < n; row++){
    //     int totalColumn = row + 1;
    //     for(int col = 0; col < totalColumn; col++){
    //         if(row == 0 || row == 1 || row == n - 1){
    //             cout << "* ";
    //        }else{
    //             //middle row
    //             if(col == 0 || col == totalColumn - 1){
    //                 cout << "* ";
    //             }else{
    //                 cout << "  ";
    //             }
    //             }
    //        }
    //        cout << endl;
    //     }
    return 0;
}
