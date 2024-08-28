#include<iostream>
using namespace std;

int main(){
    //creation
    char arr[100];

    cout << "Enter your name" << endl;
    //input
    // cin >> arr;
    // cin.getline(arr, 100);
    cin.getline(arr, 80, '\t');  //takes input utill tab 
    cout << endl << arr << endl;


    // cout << "Your name is: " << arr << endl;
    // cout << arr[0] << "->" << (int)arr[0] << endl;
    // cout << arr[1] << "->" << (int)arr[1] << endl;
    // cout << arr[2] << "->" << (int)arr[2] << endl;
    // cout << arr[3] << "->" << (int)arr[3] << endl;
    // cout << arr[4] << "->" << (int)arr[4] << endl;
    // cout << arr[5] << "->" << (int)arr[5] << endl;
    // cout << arr[6] << "->" << (int)arr[6] << endl;

    return 0;
}