#include "dot.h"
#include "triangle.h"
#include <iostream>

using namespace std;

int main() {
    Dot pointA(0, 0);
    Dot pointB(4, 0);
    Dot pointC(0, 3);

    Triangle triangle(pointA, pointB, pointC);

    triangle.displaySides();
    cout << "Периметр треугольника: " << triangle.perimeter() << "\n";
    cout << "Площадь треугольника: " << triangle.area() << "\n";

    return 0;
}
