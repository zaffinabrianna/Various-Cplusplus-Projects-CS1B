#pragma once

#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
	float catWeight;
	string catColor;

public:
	// Default constructor
	Cat();
	// Deconstructor: One-line so can be defined here.
	~Cat()
	{

	}

	// Function member that sets the cat's weight
	void setWeight(float catWeight);
	// Function member that sets the cat's color
	void setColor(string setColor);
	// Function member that outputs the cat's information
	void displayCatInfo();
	// Function member that outputs the cat meowing. 
	void meow(); 
};