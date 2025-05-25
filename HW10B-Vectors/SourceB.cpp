// Attached: HW_10b
// File: SourceB.cpp
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Vector 
// =============================================================================
// Description:
// This program uses several of the pre-defined vector functions to perform 
// several actions.
// It first declares a vector object, then pushes back several integers into
// the vector. After this, it outputs all the vector's contents using 
// the .size() operation. After, it inserts a value at the beginning of the 
// vector and outputs the contents again. Finally, it deletes the last 
// the last element and then outputs that information.
// At the end, it outputs the total amount of elements in the vector. 
// =============================================================================
// =============================================================================

#include <iostream>
#include <vector>
using namespace std;

// ==== main() =================================================================
//
// =============================================================================
int main()
{
	// Initalizes a vector named values without anything in it.
	vector<int> values; 

	// Pushes back values 1, 2, 4, 9, 5
	values.push_back(1);
	values.push_back(2);
	values.push_back(4);
	values.push_back(9);
	values.push_back(5);

	// Outputs all the information that was pushed back
	cout << "Vector: ";
	for (int i = 0; i < values.size(); i++) // values.size() returns the number of elements in the vector's list
	{
		cout << values[i] << "\t";
	}
	cout << endl << endl; 

	// Inserts 3 at the beginning of the vector (the specified location)
	values.insert(values.begin(), 3);

	// Outputs all the new information
	cout << "Vector: ";
	for (int i = 0; i < values.size(); i++) // values.size() returns the number of elements in the vector's list
	{
		cout << values[i] << "\t";
	}
	cout << endl << endl;

	// Deletes the element in the first location
	values.erase(values.begin());

	// Outputs all the new information
	cout << "Vector: ";
	for (int i = 0; i < values.size(); i++) // values.size() returns the number of elements in the vector's list
	{
		cout << values[i] << "\t";
	}
	cout << endl << endl;

	// Deletes the element in the last location
	values.pop_back();

	// Outputs all the new information
	cout << "Vector: ";
	for (int i = 0; i < values.size(); i++) // values.size() returns the number of elements in the vector's list
	{
		cout << values[i] << "\t";
	}
	cout << endl << endl;

	// Outputting the amount of elements in the list
	cout << "There are " << values.size() << " values." << endl;

	return 0;
}

/* ================================ Output =====================================
Vector: 1       2       4       9       5

Vector: 3       1       2       4       9       5

Vector: 1       2       4       9       5

Vector: 1       2       4       9

There are 4 values.

Press any key to continue...
*/