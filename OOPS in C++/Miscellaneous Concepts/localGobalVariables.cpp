#include<iostream>
using namespace std;

int x = 2; // GLOBAL VARIABLE

void fun(){
    int x = 60;
    cout << x << endl; //60 local to fun()
    ::x = 40;
    cout << ::x << endl; //40 changed global
}

int main(){
    // ::x = 4;
    x = 4; //global x
    int x = 20; // local to main()
    cout << x << endl; // 20 since most local variable is most preferable
    cout << ::x << endl; // accessing global with ::

    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl; //44
        }
        cout << x << endl; //50 most local
        cout << ::x << endl; // 4 global

    }

    fun();
    
    return 0;
}