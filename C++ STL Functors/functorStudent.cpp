#include<iostream>
using namespace std;

class Student{
    public:
        int marks;
        string name;
        Student(){

        }
        Student(int m, int n){
            this->marks = m;
            this->name = n;
        }
};

//functor
class StudentComparator{
    public:
        bool operator()(Student a, Student b){
            return a.marks < b.marks;
        }
};

int main(){

    Student s1;
    Student s2;

    s1.marks = 93;
    s1.name = "Sohini";

    s2.marks = 99;
    s2.name = "Soniya";

    StudentComparator cmp;

    if(cmp(s1, s2)){
        cout << "marks of Sohini is less than Soniya" << endl; 
    }else{
        cout << "marks of Soniya is less than Sohini" << endl;
    }

    
    return 0;
}