

#include <iostream>
#include <string>

using namespace std;

string HelloPet(string petName);

int main()
{
	string petName;
	cout << "Hi! What's ur pet's name?\n" << "Answer: ";
	cin >> petName;
	string res = HelloPet(petName);
	cout << res;

}

string HelloPet(string petName)
{
	string res = "Oh! " + petName + " is a wonderful name!!!";
	return res;
}
