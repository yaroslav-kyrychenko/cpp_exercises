// chapter 3, exercise 3
// Write a program, which asks the user for a longtitude in degrees, minutes and seconds. 
// Then calculate the longtitude in decimal format.

#include <iostream>
int main()
{
	using namespace std;

	const int sec_min_to_degree = 60;

	float degrees, minutes, seconds;
	cout << "Please type in a longtitued in degrees, minutes and seconds:" << endl << "Degrees: ";
	cin >> degrees;
	cout << "Minutes: ";
	cin >> minutes;
	cout << "Seconds: ";
	cin >> seconds;

	float degrees_decimal = degrees + (minutes / sec_min_to_degree) + (seconds / sec_min_to_degree / sec_min_to_degree);

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
		<< degrees_decimal << " degrees.";

	return 0;
}