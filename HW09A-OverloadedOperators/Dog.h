#pragma once

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Dog
{
private:
	string name;
	float weight;
	int age;
	
public:

	// Default Constructor
	Dog()
	{
		name = " ";
		weight = 0.0;
		age = 0;
	}

	// Overloaded Constructor
	Dog(string name, float weight, int age)
	{
		this->name = name;
		this->weight = weight;
		this->age = age;
	}

	// Destructor
	~Dog() {}

	// ==== displayDog =========================================================
	// This member function outputs the dogs information.
	// 
	// Input:
	// No actual input, but name, weight, and age are used.
	//
	// Output:
	// name, weight, and age are outputted to the console.
	// =========================================================================
	void displayDog()
	{
		cout << "NAME: " << name << endl;
		cout << "WEIGHT: " << weight << " pounds" << endl;
		cout << "AGE: " << age << " years old." << endl;
	} // end of displayDog()


	// Overloaded Operator for >=
	bool operator >=(int num)
	{
		num = 2;

		if (age >= num)
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	// Overloaded operator for <
	bool operator <(Dog& dog)
	{
		if (weight < dog.weight)
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	// Overloaded operator for ==
	bool operator ==(Dog& dog)
	{
		if (name == dog.name)
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	// Friend overloaded operator for <<
	friend ostream& operator <<(ostream& output, Dog& dog)
	{
		output << "NAME: " << dog.name << endl;
		output << "WEIGHT: " << dog.weight << " pounds." << endl;
		output << "AGE: " << dog.age << " years old." << endl;

		return output;
	}
};