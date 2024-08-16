#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    //creation
    unordered_map<string, string> table;

    //insertion (3 ways)
    table["in"] = "India";

    table.insert(make_pair("en", "England"));

    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    //find()
    if(table.find("in") != table.end()){
        cout << "Key is Found" << endl;
    }else{
        cout << "Key is not Found" << endl;
    }

    //count()
    if(table.count("in") == 0){
        cout << "Key is not Found" << endl;
    }else{
        cout << "Key is Found" << endl;
    }


    // table.erase(table.begin(), table.end());

    unordered_map<string, string>::iterator it = table.begin();
    while(it != table.end()){
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }
    cout << endl;

    //Access
    cout << table.at("in") << endl;
    table.at("in") = "india2";
    cout << table.at("in") << endl;
    table["in"]= "india3";
    cout << table.at("in") << endl;

    // table.clear();
    // cout << table.size() << endl;

    // if(table.empty() == true){
    //     cout << "map is empty" << endl;
    // }else{
    //     cout << "map is not empty" << endl;
    // }

    //ordered map
    map<int,string> t;
    t.insert(make_pair(3,"Soniya"));
    t.insert(make_pair(1,"Sohini"));   
    t.insert(make_pair(2,"Sohi"));   

    map<int, string>::iterator i = t.begin();
    while(i != t.end()){
        pair<int, string> p1 = *i;
        cout << p1.first << " " << p1.second << endl;
        i++;
    }
    cout << endl;


    return 0;
}