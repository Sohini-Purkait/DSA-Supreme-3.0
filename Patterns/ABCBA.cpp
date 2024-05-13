#include<iostream>
using namespace std;

void ABCBA(int n){
    for(int row = 0; row <  n; row++){
        char ch = 'A'; //Ascii 65 initialisation 
        for(int col = 0; col < row + 1; col++){       
            cout << ch << " ";
            ch++;
        }
        ch--;
        while(ch > 'A'){
            ch--;
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the pattern: ";
    cin >> n;
    ABCBA(n);
    return 0;
}