#include "triangle.h"
#include <iostream>

Triangle::Triangle(Dot v1, Dot v2, Dot v3)
    : vertex1(v1), vertex2(v2), vertex3(v3) {}

double Triangle::sideLength(Dot a, Dot b) const {
    return a.distanceTo(b);
}

double Triangle::perimeter() const {
    return sideLength(vertex1, vertex2) +
        sideLength(vertex2, vertex3) +
        sideLength(vertex3, vertex1);
}

double Triangle::area() const {
    double s = perimeter() / 2; // ������������
    double a = sideLength(vertex1, vertex2);
    double b = sideLength(vertex2, vertex3);
    double c = sideLength(vertex3, vertex1);
    return sqrt(s * (s - a) * (s - b) * (s - c)); // ������� ������
}

void Triangle::displaySides() const {
    std::cout << "������ ������ ������������:\n";
    std::cout << "������� 1: " << sideLength(vertex1, vertex2) << "\n";
    std::cout << "������� 2: " << sideLength(vertex2, vertex3) << "\n";
    std::cout << "������� 3: " << sideLength(vertex3, vertex1) << "\n";
}
