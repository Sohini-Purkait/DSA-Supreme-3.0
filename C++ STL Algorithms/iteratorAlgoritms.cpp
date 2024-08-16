#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void printDouble(int a){
    cout << 2*a << " ";   
}

bool checkEven(int a){
    return a % 2 == 0;
}

int main(){

    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;

    // for_each(arr.begin(), arr.end(), printDouble);
    // cout << endl;

    // int target = 40;
    // auto it = find(arr.begin(), arr.end(),target);
    // cout << *it << endl;

    // auto it = find_if(arr.begin(), arr.end(), checkEven);
    // cout << *it << endl;

    // int target = 11;
    // auto ans = count(arr.begin(), arr.end(),target);
    // cout << ans << endl;
    
    // auto ans = count_if(arr. begin(), arr.end(), checkEven);
    // cout << ans << endl;

    // sort(arr.begin(), arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }
    // cout << endl;

    // reverse(arr.begin(), arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }

    // rotate(arr.begin(), arr.begin()+3, arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }

    // auto it = unique(arr.begin(), arr.end());
    // //it iterator k phle saare unique elements hai
    // //it k baad saare duplicate elements hai
    // arr.erase(it, arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }

    auto it = partition(arr.begin(), arr.end(), checkEven);
    for(int it: arr){
        cout << it << " ";
    }

    return 0;
}