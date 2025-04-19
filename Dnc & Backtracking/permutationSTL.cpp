#include<iostream>
#include<algorithm>
using namespace std;

void permuteSTL(string s){
    sort(s.begin(), s.end());
    while(next_permutation(s.begin(), s.end())){
        cout << s << endl;
    }
}

int main(){
    string str = "abc";
    permuteSTL(str);
    return 0;
}