// chapter 3, exercise 7
// Write a program, which asks for information about the fuel consumption (litres per 100km) 
// and then convert it to the american miles per gallon. 
// Pay attention to the fact that during the addition different types of measurement will be used. 

#include <iostream>
int main()
{
	using namespace std;
	const float km_to_m = 62.1371; // 100 km to miles
	const float g_to_l = 3.78541; // gallons to litres

	float l_per_100km;
	cout << "Please type in your fuel consumption (litres per 100km): ";
	cin >> l_per_100km;
	float m_per_g = km_to_m / (l_per_100km / g_to_l);
	cout << "Your fuel consumption in miles per gallon is " << m_per_g << ".";
	return 0;
}
