

#include <iostream>

using namespace std;

long double FirBinSearch(double a, int n);


int main()
{
	double a;
	int n;

	while (true)
	{
		cout << "Input a (1 <= a <= 1000, no more than 6 digits after coma)\n" << "input: ";
		cin >> a;
		if (a >= 1 && a <= 1000 && (int)(a * 1000000) == (a * 1000000))
		{
			break;
		}
	}

	cout << "\n";

	while (true)
	{
		cout << "Input n (n is a natural number, a <= 10)\n" << "input: ";
		cin >> n;
		if (n >= 1 && n <= 10)
		{
			break;
		}
	}

	long double res = FirBinSearch(a, n);
	cout << "Res: " << res << endl;
}

long double FirBinSearch(double a, int n)
{
	double L = 0;
	double R = a;

	while (R - L > 1e-10)
	{
		double M = (L + R) / 2;
		if (pow(M, n) < a)
		{
			L = M;
		}
		else
		{
			R = M;
		}
	}

	return R;
}
