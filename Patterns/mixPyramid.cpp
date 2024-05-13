#include<iostream>
using namespace std;

void mixPyramid(int n){
    // first half
    for(int row = 0; row < n; row++){
        // I. stars
        for(int col = 0; col < n - row; col++){
            cout << "*"; //star with no space
        }
        // II.spaces
        for(int col = 0; col < 2 * row + 1; col++){
            cout << " ";
        }

        // III. stars
        for(int col = 0; col < n - row; col++){
            cout << "*";
        }
        cout << endl;
    }

    // second half 
    for(int row = 0; row < n; row++){
        // I. stars
        for(int col = 0; col < row + 1; col++){
            cout << "*"; //star with no space
        }
        // II.spaces
        for(int col = 0; col < 2 * (n- row) -1; col++){
            cout << " ";
        }

        // III. stars
        for(int col = 0; col < row + 1; col++){
            cout << "*";
        }
        cout << endl;
    }

    
}

int main(){
    int n;
    cout << "Enter the height of mix pyramid: ";
    cin >> n;
    mixPyramid(n);
    return 0;
}