

#include <iostream>
#include <string>

using namespace std;

void HelloPet(string petName);
void HelloPet(string petName, string name);

int main()
{
	string petName;
	cout << "Hi! What's ur pet's name?\n" << "Answer: ";
	cin >> petName;
	string name;
	cout << "What's your name?\n" << "Answer: ";
	cin >> name;
	HelloPet(petName);
	HelloPet(petName, name);
}

void HelloPet(string petName)
{
	cout << "Oh! " << petName << " is a wonderful name!!!" << endl;
}

void HelloPet(string petName, string name)
{
	cout << "Oh! " << petName << " is a wonderful name, " << name << "!!!" << endl;
}