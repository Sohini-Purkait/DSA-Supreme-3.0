#include<iostream>
#include<vector>

using namespace std;

void printSubsequences(string str, int i, string output, vector<string> &ans){
    //base case
    if(i == str.length()){
        // cout << output << endl;
        ans.push_back(output);
        return;
    }

    //1 case
    char ch = str[i];
    //include
    printSubsequences(str, i+1, output+ch, ans);
    //exclude
    printSubsequences(str, i+1, output, ans);
    //recursion
}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;

    vector<string> ans;

    printSubsequences(str,index,output,ans);
    cout << ans.size() << endl; 

    for(auto i: ans){
        cout << i << endl;
    }

    return 0;
}