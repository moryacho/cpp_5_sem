#pragma once

#include "dot.h"

class Triangle {
private:
    Dot vertex1;
    Dot vertex2;
    Dot vertex3;

public:
    Triangle(Dot v1, Dot v2, Dot v3);
    double sideLength(Dot a, Dot b) const; 
    double perimeter() const;               
    double area() const;                    
    void displaySides() const;              
};


