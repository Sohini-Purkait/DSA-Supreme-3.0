#include<iostream>
#include<string.h>
using namespace std;


// Method 1 -> Left to Right

// void lastOccLTR(string& s, char x, int i, int& ans){
//     //Base Case
//     if(i >= s.size()){
//         return;
//     }

//     //1 case
//     if(s[i] == x){
//         ans = i;
//     }

//     //RE
//     lastOccLTR(s, x, i+1, ans);
// }



//Method 2 -> Right to Left

void lastOccRTL(string& s, char x, int i, int& ans){
    //Base Case
    if(i < 0){
        return;
    }

    //1 case
    if(s[i] == x){
        ans = i;
        return;
    }

    //RE
    lastOccRTL(s, x, i-1, ans);
}

int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;

    int ans = -1;
    // lastOccLTR(s, x, 0, ans);
    lastOccRTL(s, x, s.size()-1, ans);
    cout << ans << endl;

    return 0;
}


// Method 3 -> Using STL function
// int main() {
//   char myStr[] = "Hello World";
//   char * myPtr1 = strchr(myStr, 'o');
//   char * myPtr2 = strrchr(myStr, 'o');
//   cout << "First: " << abs(myStr - myPtr1) << "\n";
//   cout << " Last: " << abs(myStr - myPtr2) << "\n";
//   return 0;
// }
