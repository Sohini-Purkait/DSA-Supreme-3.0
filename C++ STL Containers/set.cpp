#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
    //creation
    set<int> st; //ordered set-> sorted order

    //insertion
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    //traverse
    set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout << *it << " "; //4 8 10 15 
        it++;
    }
    cout << endl;

    //unorderd set
     //creation
    unordered_set<int> s; //unordered set-> unsorted order

    //insertion
    s.insert(10);
    s.insert(15);
    s.insert(8);
    s.insert(4);

    //traverse
    unordered_set<int>::iterator i = s.begin();
    while(i != s.end()){
        cout << *i << " "; //4 8 15 10
        i++;
    }
    cout << endl;

    //find()
    if(st.find(15) != st.end()){
        cout << "Key is Found" << endl;
    }else{
        cout << "Key is not Found" << endl;
    }

    //count()
    if(st.count(15) == 0){
        cout << "Key is not Found" << endl;
    }else{
        cout << "Key is Found" << endl;
    }


    return 0;
}