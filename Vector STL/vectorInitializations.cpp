#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    int size = v.size();
    for(int i=0; i<size; i++){
        cout << v[i] << " " ;
        // cout << v.at(i) << " ";
    }
}

int main(){

    vector<int> arr; //default with no data, 0 size
    vector<int> arr2(5, -1); //init with 5 size and data -1
    vector<int> arr3 = {1,2,3,4,5};
    vector<int> arr4{1,2,3,4,5};

    //how to copy vector
    vector<int> arr5 = {1,2,3,4,5};
    vector<int> arr6(arr5);
    print(arr6);

    return 0;
}