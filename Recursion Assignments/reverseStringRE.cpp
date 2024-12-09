#include<iostream>
using namespace std;

void reverse(string& s, int start, int end){
    //Base Case
    if(start >= end){
        return;
    }

    //1 case
    swap(s[start], s[end]);

    //baaki RE sambhal lega
    reverse(s, start+1, end-1);
}

int main(){
    string s;
    cin >> s;

    reverse(s, 0, s.size()-1);
    
    cout << s << endl;

    return 0;
}