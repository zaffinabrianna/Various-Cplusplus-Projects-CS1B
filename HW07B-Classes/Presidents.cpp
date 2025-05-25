#include "Presidents.h"
#include <iomanip>

// Default constructor
Presidents::Presidents()
{
	number = 0;
	name = " ";
	quote = " ";
}

// Deconstructor
Presidents::~Presidents()
{

}

// ==== setNumber ==============================================================
// This member function sets the variable number from main to the one in the 
// object.
//
// Input:
// number variable from main()
//
// Output:
// No actual output, but the variable in the object is now assigned to the one
// from main.
// =============================================================================
void Presidents::setNumber(int number)
{
	this->number = number;
}

// ==== setName ================================================================
// This member function sets the variable name from main to the one in the 
// object.
//
// Input:
// name variable from main()
//
// Output:
// No actual output, but the variable in the object is now assigned to the one
// from main.
// =============================================================================
void Presidents::setName(string name)
{
	this->name = name;
}

// ==== setQuote ===============================================================
// This member function sets the variable quote from main to the one in the 
// object.
//
// Input:
// quote variable from main()
//
// Output:
// No actual output, but the variable in the object is now assigned to the one
// from main.
// =============================================================================
void Presidents::setQuote(string quote)
{
	this->quote = quote;
}

// ==== dislpayPresidents ======================================================
// This member function displays the presidents information.
//
// Input:
// No actual input.
//
// Output:
// The presidents information is outputted to the console.
// =============================================================================
void Presidents::displayPresidents()
{
	string numberEnding = " ";

	// This if else if ladder uses math to set the ending of the number in the output.
	if (number % 10 == 1 && number % 100 != 11)
	{
		numberEnding = "st";
		
	}

	else if (number % 10 == 2 && number % 100 != 12)
	{
		numberEnding = "nd";
	}

	else if (number % 10 == 3 && number % 100 != 13)
	{
		numberEnding = "rd";
	}

	else
	{
		numberEnding = "th";
	}
	
	cout << name << ", " << number << numberEnding << " president, said: " << endl;
	cout << setw(8) << right << "\"" << quote << "\"" << endl;
}