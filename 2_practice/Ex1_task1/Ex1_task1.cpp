// Ex1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int x, y;
    int res;

    std::cout << "Input x y:\n";
    std::cin >> x >> y;

    res = x * x + y * y;

    if (res < 9 && y > 0)
    {
        std::cout << "Inside";
    }
    else if (res > 9 || y < 0)
    {
        std::cout << "Outside";
    }
    else
    {
        std::cout << "Border line";
    }
}


