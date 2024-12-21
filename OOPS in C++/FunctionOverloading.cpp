#include<iostream>
using namespace std;

class Add{
public:
    // Function Overloading

    // x, y two int addition
    int sum(int x, int y){
        cout << "Sum of 2 int" << endl;
        return x + y;
    }

    // x, y, z three int addition
    int sum(int x, int y, int z){
        cout << "Sum of 3 int" << endl;
        return x + y + z;
    }

    // x, y two double addition
    double sum(double x, double y){
        cout << "Sum of 2 double" << endl;
        return x + y;
    }


};

int main(){

    int x = 5, y = 5, z = 2;

    Add add;
    cout << add.sum(x, y) << endl;
    cout << add.sum(x, y, z) << endl;
    cout << add.sum(5.4, 2.3) << endl;
    
    return 0;
}