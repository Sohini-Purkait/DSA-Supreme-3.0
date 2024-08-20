#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //creation 
    unordered_map<int, int> desk_map;

    //insertion
    desk_map[1] = 53;
    desk_map[2] = 54;
    desk_map[3] = 55;

    desk_map[2] = 57; //reassign key 2

    //iterate
    unordered_map<int, int>::iterator it;

    //method:1 for loop
    for(it = desk_map.begin(); it != desk_map.end(); it++){
        int key = it->first;
        int value = it->second;
        cout << "key: " << key << " " << "value: " << value << endl;
    }

    //method:2 for-each loop
    for(auto it:desk_map){
        int key = it.first;
        int value = it.second;
        cout << "key: " << key << " " << "value: " << value << endl;
    }

    //find => avg case complexity O(1) //very fast
    if(desk_map.find(2) != desk_map.end()){
        //found
        int value = desk_map[2];
        cout <<"Found: " << value << endl;
    }else{
        //not found
        cout <<"Not Found" << endl;
    }

    //deletion
    desk_map.erase(2);

    cout << "after erase: " << endl;
    for(auto it:desk_map){
        int key = it.first;
        int value = it.second;
        cout << "key: " << key << " " << "value: " << value << endl;
    }

    
    return 0;
}