
#include <iostream>
using namespace std;

double PowPow(int a);
double PowIteration(int a);



int main()
{
	int a;
	cout << "Input int a: ";
	cin >> a;
	double p_res = PowPow(a);
	double i_res = PowIteration(a);
	cout << "PowPow res is " << p_res << endl;
	cout << "PowIteration res is " << i_res << endl;
}

double PowPow(int a)
{
	return pow(a, 1.0 / 3);
}

double PowIteration(int a)
{
	float y = a;
	float y1;

	do
	{
		y1 = y;
		y = 0.5 * (y + 3 * a / (2 * y * y + a / y));
	} while (abs(y - y1) > 1 / 100000);

	return y;
}
