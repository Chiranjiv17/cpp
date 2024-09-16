#include <iostream>
using namespace std;

class Shape {
public:
  
    virtual void draw() const = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
};


class Triangle : public Shape {
public:
 
    void draw() const override {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {
    
    Shape* shapePtr;

    Circle circle;
    Triangle triangle;

    shapePtr = &circle;
    shapePtr->draw(); 

    shapePtr = &triangle;
    shapePtr->draw(); 

}

