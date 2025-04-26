#include "Circle.h"

namespace shapes {

    // Default constructor
    Circle::Circle() : radius(0) {}

    // Overloaded constructor
    Circle::Circle(float r) : radius(r) {}

    // Destructor
    Circle::~Circle() {}

    // Setter
    void Circle::setRadius(float r) {
        radius = r;
    }

    // Getter
    float Circle::getRadius() const {
        return radius;
    }

}
