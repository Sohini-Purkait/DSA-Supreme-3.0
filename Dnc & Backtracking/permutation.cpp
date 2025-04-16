#include<iostream>
using namespace std;

void printPermutation(string &str, int i){
    //base case
    if(i >= str.length()){
        cout << str << endl;
        return;
    }

    //1 case -> i wale dabbe k upar, hr ek element ko chance do
    for(int j=i; j<str.length(); j++){
        //chance dene k liye swap kro
        swap(str[i], str[j]);
        //baaki recursion dekh lega
        printPermutation(str, i+1);
        //backtrack
        swap(str[i], str[j]);
    }

}

int main(){
    string str = "abc";
    int i = 0;
    printPermutation(str,i);
    return 0;
}