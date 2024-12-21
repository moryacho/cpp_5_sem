

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int checkNumber;

	cout << "Number to check: "; cin >> checkNumber;
	int* numbers = new int[checkNumber + 1];

	for (int i = 0; i <= checkNumber; i++)
	{
		numbers[i] = i;
	}
	numbers[1] = 0;

	for (int i = 2; i <= checkNumber; i++)
	{
		if (numbers[i] != 0)
		{
			for (int j = i; j <= checkNumber; j += i)
			{
				if (j != i)
					numbers[j] = 0;
			}
		}
	}


	vector<int> primes;
	int curr;
	for (int i = 2; i <= checkNumber; i++)
	{
		curr = numbers[i];
		if (curr != 0)
			primes.push_back(curr);
	}

	int size = primes.size();
	bool ans = false;

	if (primes[size - 1] == checkNumber)
	{
		cout << "Number is prime\n";

		for (int i = 0; i < size; i++)
		{
			if (primes[i] == size)
			{
				ans = true;
			}
		}

		if (ans)
		{
			cout << "Number is super prime!!!\n";
		}
	}
	else
	{
		cout << "Number is not even a prime\n";
	}
}