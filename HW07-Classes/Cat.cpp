#include "Cat.h"

// Default constructor for cat.
Cat::Cat()
{
	catWeight = 0;
	catColor = " ";
}

// ==== setWeight ==============================================================
// This member function sets the variable catWeight from main() to the one in 
// the object. 
// 
// Input:
// catWeight variable from main().
// 
// Output:
// No actual output, but the variable in the object is now assigned to the one
// from main.
// =============================================================================
void Cat::setWeight(float catWeight)
{
	this->catWeight = catWeight;
}

// ==== setColor ===============================================================
// This member function sets the variable catColor from main() to the one in the
// object.
//
// Input:
// catColor variable from main()
//
// Output:
// NO actual output, but the variabe in the object is now assined to the one
// from main.
// =============================================================================
void Cat::setColor(string catColor)
{
	this->catColor = catColor;
}

// ==== displayCatInfo =========================================================
// This member function outputs the cats weight and the cats color.
//
// Input:
// catWeight and the catColor.
//
// Output:
// The catWeight and the catColor is outputted to the console.
// =============================================================================
void Cat::displayCatInfo()
{
	cout << "weight " << catWeight << " pounds and is " << catColor << "." << endl;
}

// === meow ====================================================================
// This member function outputs the cat saying meow to the console.
//
// Input:
// No actual input.
// 
// Output:
// the cat saying MEOW! to the console.
// =============================================================================
void Cat::meow()
{
	cout << " says: MEOW!\n";
}