#include<iostream>
using namespace std;

class abc{
public:
    static int x, y;

    void print() const{
        //this
        cout << x << " " << y << endl;
        cout << this->x << " " << this->y << endl; // same as above
    }
};

int abc::x;
int abc::y;

int main(){
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print(); // 1 2

    abc obj2;
    obj2.x = 10;
    obj2.y = 20;
    obj2.print(); // 10 20
    obj1.print(); // 10 20

    return 0;
}