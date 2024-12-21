

#include <iostream>

using namespace std;

int AddNumbers(int n);
int AddNumbers(int min, int max);
int GCD(int m, int n);

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	int sum = AddNumbers(n);
	cout << "Sum from 1 to " << n << " is " << sum << endl;

	int min, max;
	cout << "Input min and max: ";
	cin >> min >> max;
	int res = AddNumbers(min, max);
	cout << "Sum from " << min << " to " << max << " is " << res;

	int m, n;
	cout << "Input m and m: ";
	cin >> m >> n;
	int res = GCD(m, n);
	cout << "GCD is " << res;
}

int AddNumbers(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return (n + AddNumbers(n - 1));
}

int AddNumbers(int min, int ma  x)
{
	if (max == min)
	{
		return min;
	}
	return (max + AddNumbers(min, max - 1));
}

int GCD(int m, int n)
{
	if (n = 0)
	{
		return m;
	}
	return GCD(n, m % n);
}