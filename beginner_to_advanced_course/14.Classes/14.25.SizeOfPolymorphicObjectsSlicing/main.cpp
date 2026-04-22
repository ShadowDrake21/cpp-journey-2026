#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    // std::cout << "sizeof(Shape) = " << sizeof(Shape) << std::endl;
    // std::cout << "sizeof(Oval) = " << sizeof(Oval) << std::endl;
    // std::cout << "sizeof(Circle) = " << sizeof(Circle) << std::endl;

    // Slicing
    Circle circle1(3.3, "Circle 1");
    Shape shape = circle1;
    shape.draw(); // Slicing occurs here. Circle::draw() is not called. Instead, Shape::draw() is called.

    return 0;
}