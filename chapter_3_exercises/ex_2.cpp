// chapter 3, exercise 2
// Write a program which asks for a height in feet and inches and weight in pounds.
// The program should calculate the BMI (Body Mass Index). 

#include <iostream>

int main()
{
	using namespace std;

	const int ft_to_in = 12;
	const float in_to_m = 0.0254;
	const float lbs_to_kg = 2.2;

	int height_ft, height_in, weight_lbs;
	cout << "Please type in your height in feet and inches separately." << endl << "Feet: ";
	cin >> height_ft;
	cout << "Inches: ";
	cin >> height_in;
	cout << "Please type in your weight in pounds: ";
	cin >> weight_lbs;

	float height_m, weight_kg;
	height_m = (height_ft * ft_to_in + height_in) * in_to_m;
	weight_kg = weight_lbs / lbs_to_kg;

	float bmi = weight_kg / (height_m * height_m);

	cout << "Your BMI is " << bmi << ".";

	return 0;
}