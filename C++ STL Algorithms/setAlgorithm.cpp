#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);

    vector<int> result;

    //set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin())); //1 2 3 4 5 6 
    //set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin())); //3 4
    //set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin())); //1 2
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin())); //1 2 5 6

    for(int a: result){
        cout << a << " ";
    }cout << endl;
    
    return 0;
}