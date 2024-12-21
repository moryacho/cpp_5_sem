// Ex_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int a, b, c;
    int k = 0, n = 10;

    for (int i = 1; i <= n; i++)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        cout << a << " * " << b << " = ";
        cin >> c;

        if (a * b != c)
        {
            k++;
            cout << "Wrong answer!!!\n";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }

    cout << "Number of wrong answers: " << k << endl;
}
