#include<iostream>
#include<string>
using namespace std;

// Base Class
class Vehicle{      //by default private
    
protected:
    string name;   
    string model;
    string noOfTyres;

    string getName(){
        return this->name;
    }

public:

    // Constructor
    Vehicle(string _name, string _model, int _noOfTyres){

        cout << "I am inside Vehicle ctor" << endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

    void startEngine(){
        cout << "Engine is starting" << name << " " << model << endl;
    }

    void stopEngine(){
        cout << "Engine is stopping" << name << " " << model << endl;
    }

   // dtor
   ~Vehicle(){
        cout << "I am inside Vehicle dtor" << endl;
    }
};

// Inheritance: Derived class
class Car : public Vehicle{
protected:
    int noOfDoors;
    string transmissionType;

public:
    // Constructor
    Car(string _name, string _model, int _noOfTyres,   int _noOfDoors, string _transmissionType) : Vehicle(_name, _model,_noOfTyres ){
        
        cout << "I am inside Car ctor" << endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void startAC(){
        cout << "AC has started of " << name << endl;  // when name is public or protected
        // cout << "AC has started of " << getName() << endl; // when name is private
    }

    // dtor
   ~Car(){
        cout << "I am inside Car dtor" << endl;
    }
};

class MotorCycle : public Vehicle{

protected:
    string handleBarStyle;
    string suspensionType;

public:
    //ctor
    MotorCycle(string _name, string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType) : Vehicle(_name, _model,_noOfTyres ){
        cout << "I am inside MotorCycle ctor" << endl;
        this->handleBarStyle = _handleBarStyle;
        this->suspensionType = _suspensionType;
    }

    void wheelie(){
        cout << "wheelie kar rhi hai" << name << endl;
    }

    // dtor
   ~MotorCycle(){
        cout << "I am inside MotorCycle dtor" << endl;
    }

};

int main(){

    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.startEngine();
    A.startAC();
    A.stopEngine();

    MotorCycle M("BMW", "VXI", 2, "U", "Hard");
    M.startEngine();
    M.stopEngine();
    M.wheelie();

    return 0;

}