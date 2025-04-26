#include "Triangle.h"

namespace shapes {
Triangle::Triangle() : base(0), height(0) {}
    

    // Overloaded constructor
    Triangle::Triangle(float b, float h) {
         base = b;
         height = h; 
        }

    // Destructor
    Triangle::~Triangle() {}

    // Setter for base
    void Triangle::setBase(float b) {
        base = b;
    }

    // Setter for height
    void Triangle::setHeight(float h) {
        height = h;
    }

    // Getter for base
    float Triangle::getBase() const {
        return base;
    }

    // Getter for height
    float Triangle::getHeight() const {
        return height;
    }

}
