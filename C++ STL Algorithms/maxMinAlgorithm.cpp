#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    cout << max(a,b) << endl;
    cout << min(a,b) << endl;

    //max/min in a range
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // auto it = min_element(arr.begin(), arr.end());
    auto it = max_element(arr.begin(), arr.end());
    cout << *it << endl; 

    return 0;
}