#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the height of Floyd's Triangle: ";
    cin >> n;
    int c = 1;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < row+1; col++){
            cout << c <<" ";
            c++;
        }       
        cout << endl;
    }
    return 0;
}


