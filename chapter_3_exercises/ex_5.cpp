// chapter 3, exercise 5
// Write a program, which asks for a current population of the world and current population of Ukraine.
// The program should calculate and display the percentage of Ukraine population in the world population.

#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	long double world_population, ukraine_population;
	cout << "Please type in the current world population: ";
	cin >> world_population;
	cout << "Please type in the current Ukraine population: ";
	cin >> ukraine_population;

	float percentage = long double (ukraine_population / world_population) * 100;
	cout << "Ukraine population account for " << percentage << "% of the world population.";

	return 0;
}