#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice; // User menu selection
    do {
        // Display menu options
        cout << "\nChoose an option:\n";
        cout << "1. Calculate area of a square\n";
        cout << "2. Calculate area of a triangle\n";
        cout << "3. Calculate area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float side;
                cout << "Enter side length of square: ";
                cin >> side;
                Square sq(side); // Create square using overloaded constructor
                cout << "Area of square: " << Area::calculate(sq) << endl;
                break;
            }
            case 2: {
                float base, height;
                cout << "Enter base and height of triangle: ";
                cin >> base;
                cout << "Enter your height :" << endl;
                cin >> height;
                Triangle tr(base, height); // Create triangle object
                cout << "Area of triangle: " << Area::calculate(tr) << endl;
                break;
            }
            case 3: {
                float radius;
                cout << "Enter radius of circle: ";
                cin >> radius;
                Circle cr(radius); // Create circle object
                cout << "Area of circle: " << Area::calculate(cr) << endl;
                break;
            }
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4); // Loop until user chooses to quit

    return 0;
}
