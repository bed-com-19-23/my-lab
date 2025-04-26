#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
namespace shapes {
    class Square;
    class Triangle;
    class Circle;

class Area {
public:
    static float calculate(const shapes::Square& square);
    static float calculate(const shapes::Triangle& triangle);
    static float calculate(const shapes::Circle& circle);
private:
    static int value; // Declare an int value as a private member
};
}
#endif
