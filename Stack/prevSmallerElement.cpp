#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void solve(stack<int> &s, vector<int> &arr, vector<int> & ans){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int element = arr[i];
        // is element k liye stack check krne jaana h
        
        while(s.top() >= element){
            s.pop();
        }

        // jab main yaha pohochunga, iska mtlab
        // k stack top pr pakka koi chhota element pada hua h
        ans.push_back(s.top());
        // push element in the stack
        s.push(element);
    }
}

int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(6);
    v.push_back(3);

    stack<int> s;
    s.push(-1);

    vector<int> ans;

    solve(s, v, ans);
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;

    return 0;
}