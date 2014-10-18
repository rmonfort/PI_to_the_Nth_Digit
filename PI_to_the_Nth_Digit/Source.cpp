#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// Pi up to 100 digits after decimal point
	const string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

	cout << "Please enter the number of digits to calculate PI to (limit: 100): ";
	int number_of_digits = 0;
	cin >> number_of_digits;

	// Check for improper input
	while (number_of_digits < 0 || number_of_digits > 100)
	{
		cout << "Sorry, the number cannot be negative or greater than 100. Please try again.\n" << endl;
		cout << "Please enter the number of digits to calculate PI to: ";
		cin >> number_of_digits;
	}

	// Adjust number of digits to account for the number 3 and the decimal point
	number_of_digits += 2;

	// Output pi to indicated number of digits
	cout << pi.substr(0, number_of_digits) << endl;

	return 0;
}