// chapter 2, exercise 2
// write a program in C++, which asks for a distance in nautical miles
// and returns a distance in meters (1 nautical mile = 1852 m)

#include <iostream>

int main()
{
	using namespace std;
	double distance_in_nm;
	cout << "Please type in the distance in nautical miles: ";
	cin >> distance_in_nm;
	cout << "Your distance in equal to " << distance_in_nm * 1852 << " metres.";
	return 0;
}
