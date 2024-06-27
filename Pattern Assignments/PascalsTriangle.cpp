#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows of Pascal's Triangle: " << endl;
    cin >> n;
    for (int i=1; i<=n; i++){
        int C = 1;
        for(int j = 1; j<=i; j++){
            cout << C << " ";
            C = C * (i-j)/j;  //formula for pascal's triangle
        }
        cout << endl;
    }
    return 0;
}