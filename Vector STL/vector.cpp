#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v){
    int size = v.size();
    for(int i=0; i<size; i++){
        cout << v[i] << endl;
    }
    cout << endl;
}

//vector printing (other method)
void print2(vector<int> v){
    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    //in vector, dont tell size of vector.
    //just keep inserting
    vector<int> v;

    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);
    print2(v);

    // pop -> delete from END
    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    // i want to clear the vector
    v.clear();

    
    return 0;
}