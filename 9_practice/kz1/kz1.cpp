#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Triangle {
private:
    double a; 
    double b; 
    double c; 

    void validateSides() const {
        if (a <= 0 || b <= 0 || c <= 0) {
            throw invalid_argument("Стороны треугольника должны быть положительными.");
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw invalid_argument("Сумма двух сторон должна быть больше третьей стороны.");
        }
    }

public:
    Triangle(double sideA, double sideB, double sideC) : a(sideA), b(sideB), c(sideC) {
        validateSides(); 
    }

    double area() const {
        double s = (a + b + c) / 2; 
        return sqrt(s * (s - a) * (s - b) * (s - c)); 
    }

    void display() const {
        cout << "Стороны треугольника: " << a << ", " << b << ", " << c << endl;
        cout << "Площадь треугольника: " << area() << endl;
    }
};

int main() {
    try {
        Triangle triangle1(3, 4, 5); 
        triangle1.display(); 

        Triangle triangle2(1, 2, 3); // Некорректный треугольник
        triangle2.display(); 
    }
    catch (const invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl; 
    }

    return 0;
}
