// PolygonArea.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>

int main()
{
    double x[5];
    double y[5];
    double area;
    area = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "Input x and y\n";
        std::cin >> x[i];
        std::cin >> y[i];
    }

    area = x[0] * y[1] + x[1] * y[2] + x[2] * y[3] + x[3] * y[4] + x[4] * y[0] - x[1] * y[0] - x[2] * y[1] - x[3] * y[2] - x[4] * y[3] - x[0] * y[4];

    area = 0.5 * fabs(area);

    std::cout << "area = " << area;
}

