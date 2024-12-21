

#include <iostream>
#include <string>

using namespace std;

void HelloPet(string petName);

int main()
{
	string petName;
	cout << "Hi! What's ur pet's name?\n" << "Answer: ";
	cin >> petName;
	HelloPet(petName);
}

void HelloPet(string petName)
{
	cout << "Oh! " << petName << " is a wonderful name!!!" << endl;
}
