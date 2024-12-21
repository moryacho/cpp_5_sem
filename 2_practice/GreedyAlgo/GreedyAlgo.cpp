

#include <iostream>
using namespace std;


int main()
{
    int count_10, count_5, count_2, count_1;
    int sum;
    cout << "Input needed sum: ";
    cin >> sum;

    count_10 = sum / 10;
    sum %= 10;
    count_5 = sum / 5;
    sum %= 5;
    count_2 = sum / 2;
    sum %= 2;
    count_1 = sum;

    cout << "Need " << count_10 << " coins for 10" << endl;
    cout << "Need " << count_5 << " coins for 5" << endl;
    cout << "Need " << count_2 << " coins for 2" << endl;
    cout << "Need " << count_1 << " coins for 1" << endl;
}