#include<iostream>
using namespace std;

class functorOne{
    public:
        //overload operator()
        bool operator()(int a, int b){
            return a > b;
        }
};

int main(){

    functorOne cmp;
    //call functor object like function call
    if(cmp(10, 5) == true){
        cout << "10 is greater than 5" << endl;
    }else{
        cout << "10 is less than 5" << endl;
    }
    
    return 0;
}