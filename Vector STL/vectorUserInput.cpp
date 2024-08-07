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
    vector<int> v;

    //insert
    int n; 
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter elements of Array: "<< endl;
    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }

    //can even insert more elements since vector is dynamic
    for(int i = 0; i < 10; i++){
        v.push_back(90);
    }

    print(v);

    return 0;
}