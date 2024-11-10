#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    // int *ptr = &a;
    // cout << sizeof(ptr) << endl;
    
    // char ch = 'a';
    // char* cptr = &ch;
    // cout <<sizeof(cptr) << endl;

    // char f = 1.4;
    // char* fptr = &f;
    // cout <<sizeof(fptr) << endl;

    // int *ptr1 = 0;
    // cout << *ptr1;

    char ch[100] = "sohini";
    char* cptr = ch;
    cout << "base address: " << &ch << endl;
    cout << ch << endl;
    cout << cptr << endl;


    return 0;
}