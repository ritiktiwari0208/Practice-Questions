#include <iostream>

// Shape interface
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {} // Adding a virtual destructor
};

// Rectangle class implementing Shape interface
class Rectangle : public Shape {
public:
    void draw() {
        std::cout << "Rectangle::draw()" << std::endl;
    }
};

// Square class implementing Shape interface
class Square : public Shape {
public:
    void draw() {
        std::cout << "Square::draw()" << std::endl;
    }
};

// Circle class implementing Shape interface
class Circle : public Shape {
public:
    void draw() {
        std::cout << "Circle::draw()" << std::endl;
    }
};

// ShapeMaker class acting as a facade
class ShapeMaker {
private:
    Shape* circle;
    Shape* rectangle;
    Shape* square;
public:
    ShapeMaker() {
        circle = new Circle();
        rectangle = new Rectangle();
        square = new Square();
    }
    void drawCircle() {
        circle->draw();
    }
    void drawRectangle() {
        rectangle->draw();
    }
    void drawSquare() {
        square->draw();
    }
    ~ShapeMaker() {
        delete circle;
        delete rectangle;
        delete square;
    }
};

// FacadePatternDemo
int main() {
    ShapeMaker shapeMaker;
    shapeMaker.drawCircle();
    shapeMaker.drawRectangle();
    shapeMaker.drawSquare();
    return 0;
}
