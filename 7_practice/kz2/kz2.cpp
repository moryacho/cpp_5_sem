#include <iostream>
#include <cmath>
using namespace std;

struct Roots {
    double root1;
    double root2;
};

Roots solveQuadraticEquation(double a, double b, double c) {
    Roots roots;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        roots.root1 = (-b + sqrt(discriminant)) / (2 * a);
        roots.root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0) {
        roots.root1 = roots.root2 = -b / (2 * a);
    }
    else {
        roots.root1 = roots.root2 = NAN;
    }

    return roots;
}

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b, c of the quadratic equation (a x^2 + b x + c = 0): ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Coefficient 'a' must not be zero in a quadratic equation." << endl;
        return 1;
    }

    Roots roots = solveQuadraticEquation(a, b, c);

    if (roots.root1 != roots.root2) {
        cout << "Roots are: " << roots.root1 << " and " << roots.root2 << endl;
    }
    else if (!isnan(roots.root1)) {
        cout << "Both roots are: " << roots.root1 << endl;
    }
    else {
        cout << "No real roots." << endl;
    }

    return 0;
}
