// chapter 3, exercise 1.
// Write a short pgoram, which asks for a height in centimetres, then convert this height into feet and inches.
// Use the symbolic constant const for writing the conversion coefficient.

#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	const float cm_to_ft = 30.48;
	const float cm_to_in = 2.54;
	int height_cm;
	cout << "Please type in your height in centimetres: ";
	cin >> height_cm;
	int height_ft = height_cm / cm_to_ft; // whole feet
	float height_in = (height_cm % int(cm_to_ft)) / cm_to_in; // remainder in inches
	cout << "Your height in feet and inches is " << height_ft << "'" << height_in << "''.";
	return 0;
}