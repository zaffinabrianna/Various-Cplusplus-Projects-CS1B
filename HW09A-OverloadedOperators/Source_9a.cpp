// Attached: HW_9a
// File: Source.cpp, Dog.h
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Overloaded Operators (HW_9a)
// =============================================================================
// Description:
// This code uses overloaded operators to see if a dog is older than 2 years,
// weighs more than another dog, if the two dogs have the same name, and uses
// an overloaded operator to output the object.
// =============================================================================
// =============================================================================
#include "Dog.h"


// ==== main ===================================================================
//
// =============================================================================
int main()
{
	// Objects
	Dog myDog("Spot", 5.5, 3);
	Dog yourDog("Jack", 4.5, 3);

	// Checks if myDog is at least 2 years old
	if (myDog >= 2)
	{
		cout << "The dog is at least 2 years old.\n\n";
	}

	else
	{
		cout << "The dog is less than 2 years old.\n\n";
	}

	// Checks if myDog weighs more than yourDog
	if (yourDog < myDog)
	{
		cout << "Your dog weighs less than my dog.\n\n";
	}

	else
	{
		cout << "Your dog does not weigh less than my dog.\n\n";
	}

	// Checkes if the dogs names are equal to eachother. 
	if (myDog == yourDog)
	{
		cout << "They have the same name.\n\n";
	}

	else
	{
		cout << "They do not have the same name.\n\n";
	}

	// Outputs "yourDog". Can do this via the overloaded operator.
	cout << yourDog << endl;
}

/* =============================== Output ======================================
The dog is at least 2 years old.

Your dog weighs less than my dog.

They do not have the same name.

NAME: Jack
WEIGHT: 4.5 pounds.
AGE: 3 years old.

Press any key to continue
*/