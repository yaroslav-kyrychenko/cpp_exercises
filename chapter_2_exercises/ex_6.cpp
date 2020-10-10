// chapter 2, exercise 6
// Write a program, which takes a parameter of distance in light years 
// and returns distance in astronomical units.

#include <iostream>
int l_years_to_astr_units(double);

int main()
{
	using namespace std;
	double l_years;
	cout << "Please type in a number of the light years: ";
	cin >> l_years;
	int astr_units = l_years_to_astr_units(l_years);
	cout << l_years << " light-years = " << astr_units << " astronomical units.";
	return 0;
}

int l_years_to_astr_units(double l_years)
{
	return l_years * 63240;
}
