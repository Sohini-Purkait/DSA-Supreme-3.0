#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    make_heap(arr.begin(), arr.end()); //77 66 55 22 11

    //insertion
    // arr.push_back(99);
    // push_heap(arr.begin(), arr.end()); //99 66 77 22 11 55 


    //deletion
    pop_heap(arr.begin(), arr.end());  //66 22 55 11 77 (moves largest element to the last)
    arr.pop_back(); //66 22 55 11 

    sort_heap(arr.begin(), arr.end()); //11 22 55 66 (ascending order)
    for(int a: arr){
        cout << a << " ";
    }cout << endl;
    
    return 0;
}