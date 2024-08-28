#include<iostream>
using namespace std;

int main(){

    string name = "Maharana Pratap";
    cout << name[0] << endl;
    cout << name.at(0) << endl;


    cout << name.front() << endl;
    cout << name.back() << endl;
    cout << name.length() << endl;

    auto it = name.begin();
    while(it != name.end()){
        cout << *it << endl;
        it++;
    }
    cout << endl;

    // name.clear();
    if(name.empty()){
        cout << "String is empty" << endl;
    }else{
        cout << "Sting is not empty" << endl;
    }

    //concatenation
    string fname = "Sohini";
    string lname = "Purkait";

    cout << fname + " " + lname << endl;

    //substring
    cout << name.substr(2,5) << endl;
    cout << name.substr(2) << endl;

    //find
    string  word = "Pratap";
    int ans = name.find(word);
    cout << ans << endl;

    string s1 = "sohini";
    string s2 = "sohini";

    cout << s1.compare(s2) << endl; //returns o if equal

    // if(name.find(word) != string::npos){ //npos-> no position
    //     //found
    // }else{
    //     //not found
    // }








    // string sentence;

    // getline(cin, sentence, 'A'); //takes input until A

    // cout << sentence << endl;




    // //creation
    // string str;

    // str.push_back('h');
    // str.push_back('e');
    // str.push_back('l');
    // str.push_back('l');
    // str.push_back('o');
    // str.pop_back();
    // cout << str << endl;

    // cout << "Enter the input" << endl;
    // //input
    // cin >> str;
    // //output
    // cout << "Str: " << str << endl;
    // cout << str[0] << endl;

    return 0;
}