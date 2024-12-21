#include<iostream>
using namespace std;

class Shape //final(class cant be inherited)
{
public:
    virtual void draw() //final (virtual function cant be overriden)
    {
        cout << "Generic drawing..." << endl;
    }
};

class Circle : public Shape{
public:
    void draw() override  {
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape{
public:
    void draw() override {
        cout << "Rectangle drawing..." << endl;
    }
};

class Triangle : public Shape{
public:
    void draw() override  {
        cout << "Triangle drawing..." << endl;
    }
};

void ShapeDrawing(Shape *s){
    s->draw(); //draw is polymorphic
}

int main(){
    Circle c;
    Rectangle r;

    // Shape *s = &c; //upcasting

    ShapeDrawing(&c);
    ShapeDrawing(&r);

    Triangle *t = new Triangle();
    ShapeDrawing(t);

    // (without virtual keyword) -> left pointer function execute
    // (with virtual keyword) -> Right object function execute
    // Shape *s = new Shape();
    // s->draw();

    // // UPCASTING 
    // Shape *s3 = new Circle();
    // s3->draw();

    // Circle *c = new Circle();
    // c->draw();

    // //DOWNCASTING
    // Shape *s2 = new Shape();
    // Circle *c2 = (Circle*)s2;
    // c2->draw();
    return 0;
}