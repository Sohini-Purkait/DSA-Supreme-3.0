#include<iostream>
using namespace std;

class Complex{
public:
    int real;
    int imag;

    Complex(){
        real = imag = -1;
    }

    // Complex(int r, int i) : real(r), imag(i){};
    Complex(int r, int i){
        this->real = r;
        this->imag = i;
    }

    //operator overloading
    Complex operator + (const Complex &B){
        // this -> A instance
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.real;
        return temp;
    }

    //operator overloading
    Complex operator - (const Complex &B){
        // this -> A instance
        Complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.real;
        return temp;
    }

    //operator overloading
    bool operator == (const Complex &B){
        // this -> A instance
        return (this->real == B.real) && (this->imag == B.imag);
    }

    void print(){
        cout << "[" << this->real << " + i" << this->imag << "]" << endl ;
    }
};

int main(){
    Complex A(3,3);
    A.print();
    Complex B(3,3);
    B.print();

    Complex C = A + B;
    C.print();

    Complex D = A - B;
    D.print();

    bool x = C == D;
    cout << x << endl;

    bool y = A == B;
    cout << y << endl;
    
    return 0;
}