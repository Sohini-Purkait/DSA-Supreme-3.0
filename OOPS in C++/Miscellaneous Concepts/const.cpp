#include<iostream>
using namespace std;

class abc{
    mutable int x;
    int *y;
    int z;
public:
    // ctor : old style
    // abc(int _x, int _y, int _z = 0){
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // initialization list 
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {}

    int getX() const{
        x = 50; // ERROR x cant be modified since it is in const function but can be modified if mutable keyword is used
        return x;
    }

    void set(int _val){
        x = _val; 
    }

    int getY() const{
        return *y;
    }

    void setY(int _val){
        *y = _val;
    }

    int getZ() const{
        return z;
    }

    void setZ(int _val){
        z = _val;
    }
};

void printABC(const abc &a){
    cout << a.getX() << " " << a.getY() << " " <<a.getZ() << endl;
}

int main(){
    abc a(1,2);
    printABC(a);
    return 0;
}

int main2(){
    // const int x = 5; // x is constant
    // innitialization can be done.
    // but we cant reassign a value.
    // x = 10; //error
    // cout << x << endl;


    // const with pointers

    // CONST data, NON-CONST pointer

    // const int *a = new int(2); 
    // int const *a = new int(2); // same as above line
    // cout << *a << endl;
    // // *a = 20;  //pointer content cant be reassigned
    // // cout << *a << endl;

    // int b = 20;
    // a = &b; // pointer itself can be reassigned
    // cout << a << endl;

    // CONST pointer, NON-CONST data

    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20;
    // cout << *a << endl;

    // int b = 50;
    // // a = &b; // error since here pointer is constant

    // CONST data, CONST pointer

    // const int *const a = new int(10);
    // cout << *a << endl;
    // // *a=50; // error data cant be reassigned
    // // int b = 100;
    // // a = &b; // error pointer cant be reassigned




    return 0;
}