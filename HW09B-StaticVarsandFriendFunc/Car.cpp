#include "Car.h"

// Static int
int Car::carCount = 0;

// Default Constructor
Car::Car()
{
	model = " ";
	year = 0;
	carCount++;
}

// Overloaded Constructor
Car::Car(string model, int year)
{
	this->model = model;
	this->year = year;
	carCount++;
}

// Destructor
Car::~Car()
{

}

// ==== setCar =================================================================
// This member function sets variables/new information given in main to the 
// varaibles in the class.
//
// Input:
// model and year from main
//
// Output:
// No actual output, but model and year from main are assigned to the ones in the
// class.
// =============================================================================
void Car::setCar(string model, int year)
{
	this->model = model;
	this->year = year;
} // end of setCar



// ==== getCount() =============================================================
// getCount() gets the count of each object created and returns it to main().
//
// Input:
// No actul input, but adds 1 to the static int, carCount, when an object is 
// created.
// 
// Output:
// Total amount of Car objects created are returned.
// =============================================================================
int Car::getCount()
{
	return carCount;
} // end of getCount()



// ==== displayCar() ===========================================================
// This function displays the cars information.
//
// Input:
// model and year are called to be outputted.
//
// Output:
// model and year are outputteed to the console.
// =============================================================================
void Car::displayCar()
{
	cout << left;

	cout << setw(10) << "Model:" << model << endl;
	cout << setw(10) << "Year:" << year << endl;
} // end of displayCar()
