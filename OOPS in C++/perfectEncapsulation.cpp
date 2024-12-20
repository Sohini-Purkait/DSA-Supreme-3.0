#include<iostream>
using namespace std;

class Student{
private:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    string gf;

public: 

    void setGpa(float a){

        //layer of authentication
        *this->gpa = a;
    }
    float getGpa() const{
        return *this->gpa;
    }

    float getAge() const{
        return this->age;
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
    // A.gpa; -> inaccessible
    cout << A.getGpa() << endl;
    A.setGpa(5.6);
    cout << A.getGpa() << endl;

    cout << A.getAge() << endl;

    
    return 0;
}