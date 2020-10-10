// chapter 2, exercise 7
// Write a program, which asks for a number of hours and minutes.
// The main() function will pass these numbers to the void function, which will display the time in the appropriate format.

#include <iostream>
using namespace std;
void time_format(int, int);

int main()
{
	int hours;
	int minutes;
	cout << "Please type in the number of hours: ";
	cin >> hours;
	cout << "Please type in the number of minutes: ";
	cin >> minutes;
	time_format(hours, minutes);
	return 0;
}

void time_format(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes;
}
