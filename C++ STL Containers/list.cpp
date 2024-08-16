#include<iostream>
#include<list>

using namespace std;

int main(){

    //creation
    list<int> myList;

    //insertion
    myList.push_back(10); //10
    myList.push_back(20); //10->20
    myList.push_back(30); //10->20->30
    myList.push_back(40); //10->20->30->40

    myList.push_front(100); //100->10->20->30->40

    // deletion
    myList.pop_back(); //100->10->20->30
    myList.pop_front(); //10->20->30
    myList.push_back(10); //10->20->30->10

    //size
    cout << myList.size() << endl;

    //first and last element
    cout << myList.front() << endl;
    cout << myList.back() << endl;

    cout << "before removing: " << endl;
    //traverse using iterator
    list<int>::iterator it = myList.begin();

    while(it != myList.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    myList.remove(10);

    cout << "after removing: " << endl;
    //traverse using iterator
    list<int>::iterator it2 = myList.begin();

    while(it2 != myList.end()){
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    // myList.clear();
    // cout << myList.size() << endl;

    // //check empty
    // if(myList.empty() == true){
    //     cout << "List is empty" << endl;
    // }else{
    //     cout << "List is not empty" << endl;
    // }


    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);

    cout << "Before Swap: " << endl ;
    list<int>::iterator it3 = first.begin();

    while(it3 != first.end()){
        cout << *it3 << " ";
        it3++;
    }
    cout << endl;

    first.swap(second);

    cout << "After Swap: " << endl;
    list<int>::iterator it4 = first.begin();

    while(it4 != first.end()){
        cout << *it4 << " ";
        it4++;
    }
    cout << endl;

    myList.insert(myList.begin(), 100);
    myList.erase(myList.begin(), myList.end());

    return 0;
}