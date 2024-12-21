#include <iostream>

using namespace std;

int RecursionSum(int n);


int main()
{
    int n, sum;
    cout << "input n: ";
    cin >> n;
    sum = RecursionSum(n);
    cout << "Sum is " << sum << endl;
}

int RecursionSum(int n)
{
    if (n == 1)
    {
        return 5;
    }

    return (5 * n + RecursionSum(n - 1));
}
