#include<iostream>
using namespace std;

int main(){
    int l, b;
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter breadth of the rectangle: ";
    cin >> b;

    for(int row = 0; row < b; row++){
        for(int col = 0; col < l  ; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}