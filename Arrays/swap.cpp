#include<iostream>
using namespace std;

int main(){

    //different methods of swap

    //1. swap inbuilt function
    // int a = 5, b = 6;
    // swap(a,b);
    // cout << "a:= " << a << ", b:= " << b << endl;

    // //2. temp variable
    // int a = 5, b = 6;
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << "a:= " << a << ", b:= " << b << endl;

    //3. arithmatic method
    // int a = 5; 
    // int b = 6;
    // a = a + b; //Sum of a and b  stored in a, a = 11, b = 6;
    // b = a - b; //Subtracting b from new a gives initial value of a,, a = 11, b = 5
    // a = a - b; //Subtract new b from new a gives initial value of b...a = 6, b = 5
    // cout << "a:= " << a << ", b:= " << b << endl;


    //4. XOR bitwise method
    int a = 5; 
    int b = 6;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << "a:= " << a << ", b:= " << b << endl;

    return 0;
}