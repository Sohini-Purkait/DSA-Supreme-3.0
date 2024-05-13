#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the height of half diamond: ";
    cin >> n;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n - row-1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}