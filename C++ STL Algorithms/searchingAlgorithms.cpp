#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // int target = 40;
    // bool it = binary_search(arr.begin(), arr.end(), target);
    // cout << it << endl;

    // auto it = lower_bound(arr.begin(), arr.end(), 35);
    // cout << *it << endl; //40

    auto it = upper_bound(arr.begin(), arr.end(), 40);
    cout << *it << endl; //50

    return 0;
}