
#include <iostream>
using namespace std;

double TriangleArea(int side);
double TriangleArea(int side1, int side2, int side3);




int main()
{
    int side, side1, side2, side3;
    cout << "input side: ";
    cin >> side;
    double res = TriangleArea(side);
    cout << "Area is " << res << endl;

    cout << "input side1 side2 side3: ";
    cin >> side1 >> side2 >> side3;
    res = TriangleArea(side1, side2, side3);
    cout << "Area is " << res << endl;
}

double TriangleArea(int side)
{
    double res = (pow(3, 0.5) * side * side) / 4;
    return res;
}

double TriangleArea(int side1, int side2, int side3)
{
    double half_p = (side1 + side2 + side3) / 2.0;
    double res = half_p * (half_p - side1) * (half_p - side2) * (half_p - side3);
    res = pow(res, 0.5);
    return res;
}