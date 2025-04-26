#include "Area.h"
#include <cmath> 
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
namespace shapes {
    int Area::value = 0;
// Calculate area of a square
float Area::calculate(const shapes::Square& square) {
    return square.getSide() * square.getSide(); // Area = side^2
}

// Calculate area of a triangle
float Area::calculate(const shapes::Triangle& triangle) {
    return 0.5f * triangle.getBase() * triangle.getHeight(); // Area = 0.5 * base * height
}

// Calculate area of a circle
float Area::calculate(const shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius(); // Area = π * r^2
}


}