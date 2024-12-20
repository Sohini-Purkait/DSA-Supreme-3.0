#include<iostream>
using namespace std;

class Student{

public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    int *gpa;

    //Constructor: Default ctor
    Student(){
        cout << "Student default constructor called" << endl;
        delete this->gpa;
    }

    //ctor: Parameterised ctor
    Student(int id, int age, string name, int nos, float gpa){
        cout << "Student Parameterised constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa);
    }

    //ctor: Copy ctor
    Student(const Student &srcobj){ //source object => A
        cout << "Student Copy constructor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
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
    }

};

int main(){

    //creating objects using default ctor
    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Ranu";
    // A.nos = 6;

    // A.study();


    // Student B;
    // B.id = 2;
    // B.age = 15;
    // B.name = "Rahul";
    // B.nos = 5;

    // B.bunk();

    //creating objects using parameterised ctor
    // Student A(1, 15, "Ranu", 6);  //stack
    // Student B(2, 13, "Rahul", 5);

    // cout << A.name << " " << A.age << endl;
    // A.bunk();
    // B.sleep();

    //Creating objects using Copy constructor
    // Student C = A;
    // Student C(A);

    // cout << C.name << " " << A.name << endl;

    //Dynamic allocation, or Student pointer
    Student *A = new Student(1, 14, "Love", 7, 9.8);
    cout << A->name << endl;
    cout << A->age << endl;
    A->study();
    delete A;

    
    return 0;
}