#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
}

int main(){
    Bird *bird = new sparrow();
    birddoesSomething(bird);

    Bird *bird1 = new eagle();
    birddoesSomething(bird1);
    return 0;
}