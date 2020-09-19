// exercise 5
// Write a program, which asks for a temperature expressed in degrees Celsius and 
// returns a temperature in degrees Fahrenheit.

#include <iostream>
int cels_to_fahr(int cels);

int main()
{
	using namespace std;
	double temp_celsius;
	cout << "Please type in temperature in degrees Celsius: ";
	cin >> temp_celsius;
	int temp_fahr = cels_to_fahr(temp_celsius);
	cout << temp_celsius << " degrees Celsius is " << temp_fahr << " degrees Fahrenheit.";
	return 0;
}

int cels_to_fahr(int cels)
{
	return 1.8 * cels + 32;
}