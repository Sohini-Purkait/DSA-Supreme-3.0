#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    //creation
    priority_queue<int> pq;
    
    //insertion
    pq.push(10); //10
    pq.push(25); //25,10
    pq.push(55); //55,25,10
    pq.push(21); //55,25,21,10

    //max-heap -> maximum value -> Highest Priority

    //top element -> Highest priority element
    cout << pq.top() << endl; //55
    pq.pop(); //Highest priority element -> pop ->55 ko pop krdia
    //25,21,10
    cout << pq.top() << endl; //25
    pq.pop(); //21,10
    cout << pq.top() << endl; //21

    cout << pq.size() << endl;

    if(pq.empty() == true){
        cout << "pq is empty" << endl;
    }else{
        cout << "pq is not empty" << endl;
    }



    //min-heap -> Minimum Value ->Highest priority
    priority_queue<int,vector<int>,greater<int>> pque;

    pque.push(100); //100
    pque.push(50); //50,100
    pque.push(75); //50,75,100

    cout << pque.top() << endl; //50

    pque.pop(); //75,100
    cout << pque.top() << endl; //75



    return 0;
}