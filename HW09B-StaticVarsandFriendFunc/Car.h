#pragma once

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Car
{
private:
	string model;
	int year;
	static int carCount;

public:
	// Default constructor
	Car();

	// Overloaded Constructor
	Car(string model, int year);

	// Destructor
	~Car();

	// sets new car information 
	void setCar(string model, int year);
	
	// static function that gets the total count of objects created
	static int getCount();

	// displays car information
	void displayCar();

	// friend function that is defined in main()
	friend bool areSame(Car& car1, Car& car2);
};