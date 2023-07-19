#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    Rectangle rectangle;
    shapePtr = &circle;
    shapePtr->draw();

    shapePtr = &rectangle;
    shapePtr->draw(); 

    Circle* cirptr;
    Circle cir;
    cirptr=&cir;
    cirptr->draw();
    
    Rectangle* rectPtr;
    Rectangle rec;
    rectPtr=&rec;
    rectPtr->draw();
    return 0;
}
