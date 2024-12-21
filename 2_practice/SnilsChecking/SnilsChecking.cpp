
#include <iostream>
#include <string>
using namespace std;

string GetCheckNumber(string digits);

int main()
{
	string digits, checkNumber;
	cout << "Input digits and first number with a space between: ";
	cin >> digits >> checkNumber;
	cout << digits << "\n" << checkNumber << endl;
	string res = GetCheckNumber(digits);

	if (checkNumber == res)
	{
		cout << "Valid SNILS";
	}
	else
	{
		cout << "Invalid SNILS((( " << res;
	}
}

string GetCheckNumber(string digits)
{
	int totalSum = 0;

	for (int i = 0; i < 9; i++)
	{
		totalSum += (digits[i] - '0') * (9 - i);
	}

	if (totalSum < 100)
	{
		return to_string(totalSum);
	}
	if (totalSum == 100 || totalSum == 101)
	{
		return "00";
	}
	if (totalSum > 101)
	{
		int ost = totalSum % 101;
		if (ost < 100)
		{
			return to_string(ost);
		}
		return "00";
	}
}
