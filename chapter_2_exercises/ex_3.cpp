// chapter 2, exercise 3
// write a program in c++, which uses 3 functions (one of which is main()) and returns the following results:
// Entliczek pentliczek
// Czerwony stoliczek
// Two first lines will be generated by the first function used twice, 
// the next two lines will be generated twice as well by the second function.

#include <iostream>
using std::cout;
using std::endl;
void first_to_second_line();
void third_to_fourth_line();


int main()
{
	first_to_second_line();
	first_to_second_line();
	third_to_fourth_line();
	third_to_fourth_line();
	return 0;
}

void first_to_second_line()
{
	cout << "Entliczek pentliczek" << endl;
}

void third_to_fourth_line()
{
	cout << "Czerwony stoliczek" << endl;
}
