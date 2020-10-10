// chapter 3, exercise 6
// Write a program, which asks about how many kilometres you've driven and how much litres of gas was used.
// The program should calculate and display the number of fuel consumption per 100 kilometres.

#include <iostream>
int main()
{
	using namespace std;
	int km_driven, gas_used;
	cout << "How many kilometres have you driven since the last refuel? ";
	cin >> km_driven;
	cout << "How many litres of gas have you used? ";
	cin >> gas_used;
	
	int l_per_100km = (float) gas_used / km_driven * 100;

	cout << "Your fuel consumption per 100 km is " << l_per_100km << "l.";
	return 0;
}