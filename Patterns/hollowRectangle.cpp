#include<iostream>
using namespace std;

int main(){
    int l, b;
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter breadth of the rectangle: ";
    cin >> b;

    for(int row = 0; row < b; row++){
        for(int col = 0; col < l; col++){
            // first & last row
            if(row == 0 || row == b-1){
                cout << "* ";
            }else{
                //middle rows
                if(col == 0 || col == l-1){
                    cout << "* ";
                }else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}