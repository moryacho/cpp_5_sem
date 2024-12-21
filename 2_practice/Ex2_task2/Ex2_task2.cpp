
#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");

    int a, b;
    int a1, b1;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    a1 = a;
    b1 = b;

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    cout << "GCD = " << a << endl;

    a = a1;
    b = b1;

    cout << "Постусловие" << endl;

    do
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    } while (a != b);

    cout << "GCD = " << a << endl;

}
