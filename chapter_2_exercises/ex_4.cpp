// exercise 4
// Write a program, which asks for an age and displays the user's age expressed in months.

#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	double age;
	cout << "Please type in your age: ";
	cin >> age;
	cout << "Your age expressed in months is " << age * 12 << ".";
	return 0;
}