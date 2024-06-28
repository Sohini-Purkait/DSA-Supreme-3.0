#include<iostream>
using namespace std;

float circle_area(float radius){
    float area = 3.14 * radius * radius;
    return area;
}

int main(){
    float r;
    cout << "Enter radius: ";
    cin >> r;
    float area = circle_area(r);
    cout <<"Area of circle of radius: "<<r<<" is: "<<area<<endl;

    return 0;
}