// Ex2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    char op;

    std::cout << "Make your choice, assemble your dream car: ";
    std::cin >> op;

    switch (op)
    {
        case 'V':
            std::cout << "Air conditioning is a must!\n";
        case 'S':
            std::cout << "Radio plays\n";
        default:
            std::cout << "Round wheels\n";
            std::cout << "Powerful engine\n";
    }

}
