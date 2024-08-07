#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    while(1){
        int d;
        cin >> d;
        v.push_back(d);
        cout << "Capacity: " << v.capacity() << " Size:" << v.size() << endl;
    }
    
    return 0;
}