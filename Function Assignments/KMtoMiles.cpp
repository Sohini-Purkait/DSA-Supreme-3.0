#include<iostream>
using namespace std;

float KMtoMiles(float km){
    float _1kmMile = 0.621371;
    return km * _1kmMile;
}

int main(){
    float km;
    cout << "Tell me kilometer: ";
    cin >> km;
    float miles = KMtoMiles(km);
    cout << "Miles: " << miles << endl;
    return 0;
}