#include<iostream>
using namespace std;

class abc{
public:
    int x, y;

    abc() : x(0), y(0){}

    static void print(){
        //no this pointer accessible
        cout << "I am in Static " << __FUNCTION__<< endl; // __FUNCTION__ prints name of function
    }
};


int main(){
    abc obj1;
    abc::print(); 

    abc obj2;
    abc::print(); 
    abc::print(); 

    return 0;
}