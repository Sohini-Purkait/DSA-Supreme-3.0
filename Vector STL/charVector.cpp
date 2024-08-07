#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    cout << "Front element = " << v[0] << endl;
    cout << "Front element = " << v.front() << endl;
    cout << "End element = " << v[v.size()-1] << endl;
    cout << "End element = " << v.back() << endl;
    
    return 0;
}