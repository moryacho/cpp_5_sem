#include <iostream>
#include <cmath> // sqrt

using namespace std;

int Myroot(double a, double b, double c, double& x1, double& x2);

int main() {
    system("chcp 1251");
    double a, b, c;
    double x1, x2;

    cout << "Введите коэффициенты a, b и c (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;
    int result = Myroot(a, b, c, x1, x2);

    switch (result) {
    case 1:
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
        break;
    case 0:
        cout << "Корень уравнения один: x1 = x2 = " << x1 << endl;
        break;
    case -1:
        cout << "Корней уравнения нет." << endl;
        break;
    }

    return 0;
}

int Myroot(double a, double b, double c, double& x1, double& x2) {
    if (a == 0) {
        if (b == 0) {
            return -1;
        }
        x1 = -c / b;
        x2 = x1;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        return -1;
    }
    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        return 0;
    }
    else {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        return 1;
    }
}
