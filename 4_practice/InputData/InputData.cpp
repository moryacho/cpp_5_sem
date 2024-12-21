using namespace std;

#include <iostream>
#include <string>
#include <regex>

bool Input(int& a, int& b);

int main()
{
    system("chcp 1251");

    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
}

bool Input(int& a, int& b)
{
    cout << "Введите два целых числа (a и b): ";
    cin >> a >> b;

    if (a == b)
    {
        return true;
    }

    return false;
}