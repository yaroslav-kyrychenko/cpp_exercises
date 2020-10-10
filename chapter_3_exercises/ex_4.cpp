// chapter 3, exercise 4
// Write a program, which asks for a number of seconds (variable type long or long long) as an integer (use type long).
// The program then shows an equivalent of the given number in days, hours, minutes and seconds. 

#include <iostream>
int main()
{
	using namespace std;
	const int min_to_sec = 60;
	const int hours_to_sec = 3600;
	const long days_to_sec = 86400;

	long long seconds;
	cout << "Please type in a number of seconds: ";
	cin >> seconds;

	int days, hours, minutes, seconds_remaining;
	days = seconds / days_to_sec;
	hours = (seconds % days_to_sec) / hours_to_sec;
	minutes = ((seconds % days_to_sec) % hours_to_sec) / min_to_sec;
	seconds_remaining = ((seconds % days_to_sec) % hours_to_sec) % min_to_sec;
	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " 
		<< minutes << " minutes, " << seconds_remaining << " seconds.";
	return 0;
}