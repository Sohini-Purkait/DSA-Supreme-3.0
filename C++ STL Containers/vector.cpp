#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    //creation
    vector<int> marks;

    // marks.reserve(10);
    // cout << marks.max_size() << endl;

    //insertion
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);


    // marks.clear();
    marks.insert(marks.begin(), 50);
    cout << marks[0] << endl;

    cout << "Size: " << marks.size() << endl;

    //erase
    marks.erase(marks.begin(), marks.end());
    cout << "Size: " << marks.size() << endl;

    //removal
    marks.pop_back();

    cout << "Size: " << marks.size() << endl;
    
    //front and back element
    cout << marks.front() << endl; //print first element
    cout << marks.back() << endl; //print last element

    //check empty
    if(marks.empty() == true){
        cout << "Vector is empty" << endl;
    }else{
        cout << "Vector is not empty" << endl;
    }

    //access & modify
    marks[0] = 100;
    cout << marks[0] << endl;
    cout << marks.at(0) << endl;

    cout << marks.capacity() << endl;
    cout << marks.size() << endl;


    // cout << *(marks.begin()) << endl;

    // vector<int> miles(10);
    // vector<int> distances(15, 0);


    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

    //traversing the vector using iterator

    //create an iterator
    vector<int>::iterator it = first.begin();

    while(it != first.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);

    cout << first[0] << " " << first[1] << " " << first[2] << " " << first[3] << " " << endl;

    //for each loop
    for(int i : first){
        cout << i << " ";
    }
    cout << endl;

    for(int i : second){
        cout << i << " ";
    }
    cout << endl;



    //2D Vector
    vector<vector<int>> arr(5, vector<int>(4,0));
    //2D array created with 5 rows, 4 cols, initial val of each cell is 0
    int totalRows = arr.size();
    int totalCols = arr[0].size();

    //jagged array
    vector<vector<int>> brr(4);

    brr[0] = vector<int> (4);
    brr[1] = vector<int> (2);
    brr[2] = vector<int> (5);
    brr[3] = vector<int> (3);

    int totalRowCount = brr.size();
    // int totalColCount = brr[i].size();


    return 0;
}