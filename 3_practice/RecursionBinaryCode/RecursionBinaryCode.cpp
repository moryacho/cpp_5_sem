using namespace std;

#include <iostream>
#include <string>

string BinaryCode(int n);


int main()
{
    int n;
    string res;
    cout << "input n: ";
    cin >> n;
    res = BinaryCode(n);
    cout << "Res is " << res << endl;
}

string BinaryCode(int n)
{
    if (n == 0)
    {
        return "";
    }

    return BinaryCode(n / 2) + to_string(n % 2);
}