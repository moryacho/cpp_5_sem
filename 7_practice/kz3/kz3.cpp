#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;

tuple<bool, double, double> solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            return make_tuple(false, 0, 0);
        }
        return make_tuple(true, -c / b, 0);
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        return make_tuple(false, 0, 0);
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        return make_tuple(true, root, 0);
    }
    else {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        return make_tuple(true, root1, root2);
    }
}

int main() {
    system("chcp 1251");
    double a, b, c;
    cout << "Введите коэффициенты a, b и c: ";
    cin >> a >> b >> c;

    auto result = solveQuadratic(a, b, c);
    bool hasRoots = get<0>(result);
    double root1 = get<1>(result);
    double root2 = get<2>(result);

    if (hasRoots) {
        cout << "Корни уравнения: ";
        if (root2 == 0) {
            cout << root1 << endl;
        }
        else {
            cout << root1 << " и " << root2 << endl;
        }
    }
    else {
        cout << "Корней нет." << endl;
    }

    return 0;
}
