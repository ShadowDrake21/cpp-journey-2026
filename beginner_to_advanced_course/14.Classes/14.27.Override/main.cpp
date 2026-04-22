#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{

    Circle circle1(7.2, "Circle1");
    Oval oval1(5.0, 3.0, "Oval1");
    Circle circle2(10.0, "Circle2");
    Oval oval2(8.0, 4.0, "Oval2");
    Circle circle3(15.0, "Circle3");
    Oval oval3(12.0, 6.0, "Oval3");

    // Shape shapes1[]{circle1, oval1, circle2, oval2, circle3, oval3};
    // std::cout << "sizeof(circle1):" << sizeof(circle1) << std::endl;

    // for (Shape &s : shapes1)
    // {
    //     std::cout << "sizeof(s): " << sizeof(s) << std::endl;
    //     s.draw();
    // }

    // const Shape& shapes2[] {circle1, oval1, circle2, oval2, circle3, oval3};

    Shape *shapes3[]{&circle1, &oval1, &circle2, &oval2, &circle3, &oval3};

    for (Shape *shape_ptr : shapes3)
    {
        shape_ptr->draw();
        std::cout << std::endl;
    }

    return 0;
}