#include<iostream>
#include<vector>
#include<forward_list>
#include<list>

using namespace std;

int main(){

    // //iterator revision
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    
    // //traverse using iterator
    // //create iterator
    // vector<int>::iterator it = arr.begin();

    // while(it != arr.end()){
    //     cout << *it << " ";
    //     it++;
    // }


    /////////////////Forward Iterator////////////////////

    // forward_list<int> list;

    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);

    // //traverse using iterator
    // forward_list<int>::iterator it = list.begin();

    // while(it != list.end()){
    //     //reading
    //     //cout << *it << " ";  //30 20 10 

    //     //writing
    //     (*it) = (*it) + 5;
    //     it++;
    // }
    // it = list.begin();
    // while(it != list.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    //lets try moving backward with forward iterator
    // forward_list<int>::iterator it = list.end();

    // while(it != list.begin()){
    //     cout << *it << " ";
    //     it--; //not possible
    // }



    /////////////////////////Bi-directional Iterator/////////////////

    // list<int> myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);

    // list<int>::iterator it = myList.begin();
    
    // while(it != myList.end()){
    //     //writing
    //     (*it) = (*it) + 2;
    //     //reading
    //     cout << (*it) << " ";
    //     //forward move
    //     it++;
    // }

    // list<int>::iterator it = myList.end();
    //  while(it != myList.begin()){ 
    //     //backward move
    //     it--;
    //     (*it) = (*it) + 5;
    //     cout << (*it) << " ";
    // }



    /////////////////////Random Access Iterator////////////////////

    vector<int> arr = {10,20,30,40,50};

    //random access
    vector<int>::iterator itr = arr.begin() + 3;
    cout << *itr << endl; //40

    //traverse using iterator
    // vector<int>::iterator it = arr.begin();
    // while(it != arr.end()){
    //     //write
    //     *it = *it + 7;
    //     //read
    //     cout << *it << " ";
    //     //forward move
    //     it++;
    // }

    //lets try backward movement in vector iterator
    vector<int>::iterator it = arr.end();
    while(it != arr.begin()){
        //for go back
        it--;
        //then print
        cout << *it << " ";
    }





    
    return 0;
}