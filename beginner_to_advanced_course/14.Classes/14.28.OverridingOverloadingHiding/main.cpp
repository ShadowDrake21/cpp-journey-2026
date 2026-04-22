#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    Shape *shape_ptr = new Circle(5.0, "Circle with radius 5.0");
    shape_ptr->draw(34, "Red");

    return 0;
}