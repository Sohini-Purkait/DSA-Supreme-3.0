#include<iostream>
using namespace std;

class Student{

public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

private:
    float *gpa;
    string gf;

public: 
    //Constructor: Default ctor
    Student(){
        cout << "Student default constructor called" << endl;
        
    }

    //ctor: Parameterised ctor
    Student(int id, int age, string name, int nos, float gpa, string gf){
        cout << "Student Parameterised constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }


    
    // Behaviour / Methods / Functions
    void study(){
        cout << this->name << " Studying" << endl;
    }

    void sleep(){
        cout << this->name << " Sleeping" << endl;
    }

    void bunk(){
        cout << this->name << " Bunking" << endl;
    }



    //Destructor: Default dtor
    ~Student(){
        cout << this->name << " Student default destructor called" << endl;
        delete this->gpa;
    }

private:
    void gfchatting(){
        cout << this->name << " Chatting with gf" << endl;
    }
};

int main(){

    
    Student A(1, 14, "Ranu", 7, 9.8, "Menu");
    cout << A.age << endl;
    // cout << A.gf << endl; //inaccessible
    // A.gfchatting(); //inaccessible

    
    return 0;
}