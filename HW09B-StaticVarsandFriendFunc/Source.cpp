// Attached: HW_9b
// File: Source.cpp, Car.h, Car.cpp
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Static Variables and Friend Function (HW_9b)
// =============================================================================
// Description:
// This code uses a static class variable to count how many times an object is 
// made. It also uses a friend function, which is defined in main, to check
// if the two cars' information are the same.
// =============================================================================
// =============================================================================
#include "Car.h"

// Function Prototype (friend function)
bool areSame(Car& car1, Car& car2);


// ==== main ===================================================================
//
// =============================================================================
int main()
{
	// Default Object
	Car myCar;
	// Object
	Car yourCar("Toyota", 2007);

	// Displays myCar
	cout << "My Car" << endl;
	myCar.displayCar();
	cout << endl;
	
	// Displays yourCar
	cout << "Your Car" << endl;
	yourCar.displayCar();

	// Sets myCar to new information
	myCar.setCar("Ford", 2002);
	cout << endl;

	// Outputs myCar with its new information
	cout << "My Car" << endl;
	myCar.displayCar();
	cout << endl << endl;

	// Gives a response depending if the two objects are the same
	if (areSame(myCar, yourCar))
	{
		cout << "The two cars are the same model and year." << endl;
	}

	else
	{
		cout << "The two cars are not the same model and year." << endl;
	}

	// Gets the total amount of cars that were declared.
	cout << "\n" << Car::getCount() << " cars have been declared." << endl;
	return 0;
}


// ==== areSame ================================================================
// This member function takes two objects and checks if they are equal to 
// eachother.
// 
// Input:
// car1 and car2 are passed into areSame to check if they are equal together.
//
// Output:
// Depending on if they are equal to eachother or not, true or false is returned.
// =============================================================================
bool areSame(Car& car1, Car& car2)
{
	if (car1.model == car2.model && car1.year == car2.year)
	{
		return true;
	}

	else
	{
		return false;
	}
} // end of areSame()



/*================================= Output =====================================
My Car
Model:
Year:     0

Your Car
Model:    Toyota
Year:     2007

My Car
Model:    Ford
Year:     2002


The two cars are not the same model and year.

2 cars have been declared.

Press any key to continue...
*/