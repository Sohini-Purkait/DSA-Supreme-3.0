#include<iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;

using namespace std;

class Student {
public:
    int marks;
    string name;

    Student(int m, string n) {
        this->marks = m;
        this->name = n;
    }
};

class comparator{
    public:
    bool operator()(Student a, Student b){
        //criteria -> max marks -> high priority
        return a.marks < b.marks;
    }

};

int main(){

    priority_queue<Student, vector<Student>, comparator> pq;

    pq.push(Student(90, "Love"));
    pq.push(Student(95, "Lakshay"));
    pq.push(Student(85, "Kunal"));

    cout << pq.top().marks << " " << pq.top().name << endl;


    // //max heap
    // priority_queue<int> pq;
    // priority_queue<int,vector<int>, less<int>> pq3;

    // //min heap
    // priority_queue<int,vector<int>, greater<int>> pq2;

    
    return 0;
}