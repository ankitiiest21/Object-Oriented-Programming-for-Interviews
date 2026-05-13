#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    // Overload 1: Calculate area of a Circle (takes 1 double)
    double calculateArea(double radius) {
        cout << "Calculating area of a Circle: ";
        return M_PI * radius * radius;
    }

    // Overload 2: Calculate area of a Rectangle (takes 2 doubles)
    double calculateArea(double length, double width) {
        cout << "Calculating area of a Rectangle: ";
        return length * width;
    }

    // Overload 3: Calculate area of a Square (takes 1 int)
    // Note: This differs from the circle by parameter TYPE (int vs double)
    int calculateArea(int side) {
        cout << "Calculating area of a Square: ";
        return side * side;
    }
};

int main() {
    Shape myShape;

    // Compiler chooses Overload 1
    cout << myShape.calculateArea(5.0) << " sq units" << endl;

    // Compiler chooses Overload 2
    cout << myShape.calculateArea(10.0, 4.0) << " sq units" << endl;

    // Compiler chooses Overload 3
    cout << myShape.calculateArea(4) << " sq units" << endl;

    return 0;
}