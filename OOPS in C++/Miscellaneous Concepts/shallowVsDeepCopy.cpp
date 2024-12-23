#include<iostream>
using namespace std;

class abc{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    //default dumb copy constructor: it does shallow copy
    // abc(const abc& obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    // DEEP COPY
    abc(const abc& obj){
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const{
        printf("X: %d \n PTR Y: %p \n Content of Y (*y): %d\n\n", x, y,*y);
    }

    ~abc(){
        delete y;
    }
};

int main(){
    abc a(1,2);
    cout << "Printing a \n";
    a.print();

    // abc b(a);
    abc b = a;  // call hota hai, copy constructor
    cout << "Printing b \n";
    b.print();

    *b.y = 20;
    cout << "Printing b \n";
    b.print();

    cout << "Printing a \n";
    a.print();
    
    return 0;
}