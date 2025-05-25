// Attached: HW_10c
// File: SourceC.cpp
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Vectors
// =============================================================================
// Description:
// This program creates two vectors, hours and wage, to calculate the gross pay
// (hours * wage) for 5 employees. It first asks for the hours and wage of 
// each employee from the user. It then calculates the gross pay of each 
// employee (using their information) and outputs it to the console.
// Finally, the hours of the first employee and last employee are outputted
// to the console using .front() and .back()
// =============================================================================
// =============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// ==== main() =================================================================
//
// =============================================================================
int main()
{
	const int NUM_EMPLOYEES = 5;
	
	// Two vectors initalized with a size of 5
	vector<int>hours(NUM_EMPLOYEES);
	vector<double>wage(NUM_EMPLOYEES);

	cout << "Enter hours worked and hourly wage of each employee:\n\n";

	// You said to use the size function, so I just used hours.size() instead of NUM_EMPLOYEES
	for (int i = 0; i < hours.size(); i++)
	{
		cout << "Hours for Employee #" << i + 1 << ": ";
		cin >> hours[i];

		cout << "Wage for Emplyee #" << i + 1 << ": ";
		cin >> wage[i];
	}

	system("CLS");

	cout << fixed << setprecision(2);

	cout << "Gross pay for each employee:\n\n";

	// You said to use the size function, so I just used hours.size() instead of NUM_EMPLOYEES
	for (int i = 0; i < hours.size(); i++)
	{
		cout << setw(11) << "Emplyee #" << i + 1 << setw(5) << "$"
			<< setw(7) << hours[i] * wage[i] << endl;
		// ^ multiplies like you would with normal array values. 
	}

	// Front() returns value in the first element of hours
	cout << "\nEmployee #1 hours = " << hours.front();
	// back() returns the value in the last element of hours
	cout << "\nEmployee #5 hours = " << hours.back() << endl;

	return 0;
} // end of main()

/* =================================== Output ==================================
Enter hours worked and hourly wage of each employee:

Hours for Employee #1: 20
Wage for Emplyee #1: 15
Hours for Employee #2: 25
Wage for Emplyee #2: 15
Hours for Employee #3: 30
Wage for Emplyee #3: 15.5
Hours for Employee #4: 40
Wage for Emplyee #4: 16.25
Hours for Employee #5: 39
Wage for Emplyee #5: 15.5

--------------------------------- Screen Clears --------------------------------
Gross pay for each employee:

  Emplyee #1    $ 300.00
  Emplyee #2    $ 375.00
  Emplyee #3    $ 465.00
  Emplyee #4    $ 650.00
  Emplyee #5    $ 604.50

Employee #1 hours = 20
Employee #5 hours = 39

*/