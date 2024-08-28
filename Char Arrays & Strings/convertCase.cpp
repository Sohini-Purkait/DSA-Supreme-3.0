#include<iostream>
using namespace std;

int getLength(char arr[], int size){
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

void convertIntoLowerCase(char arr[], int n){
    int len = getLength(arr, n);
    for(int i=0; i<len; i++){
        char ch = arr[i];
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch - 'A' + 'a';
        }       
        arr[i] = ch;
    }
}

void convertIntoUpperCase(char arr[], int n){
    int len = getLength(arr, n);
    for(int i=0; i<len; i++){
        char ch = arr[i];
        //if letter is a lowercase letter
        //then only convert it
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - 'a' + 'A';
        }       
        arr[i] = ch;
    }
}

int main(){
    char arr[1000];
    cin >> arr;
    // convertIntoLowerCase(arr, 1000);
    // cout << arr << endl;
    convertIntoUpperCase(arr, 1000);
    cout << arr << endl;
    
    return 0;
}
