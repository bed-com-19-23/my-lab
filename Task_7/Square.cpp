#include "Square.h"

namespace shapes {

    // Default constructor
    Square::Square() : side(0) {}

    // Overloaded constructor
    Square::Square(float s) : side(s) {}

    // Destructor
    Square::~Square() {}

    // Setter
    void Square::setSide(float s) {
        side = s;
    }

    // Getter
    float Square::getSide() const {
        return side;
    }

}
