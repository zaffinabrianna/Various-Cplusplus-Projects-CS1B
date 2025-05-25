// Attached: HW_7a
// File: Source.cpp, Cat.cpp, Cat.h
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Cat Class (HW_7a)
// =============================================================================
// Description:
// This program uses a class named Cat and asks the user to give information for
// three different cats, fluffy, tom, and kitty. This information is stored in
// their own object and is outputted to the console along with them meowing.  
// =============================================================================
// =============================================================================
#include "Cat.h" 


// ==== main ===================================================================
//
// =============================================================================
int main()
{
	// Cat class objects
	Cat fluffy;
	Cat tom;
	Cat kitty;

	// Variables
	float catWeight = 0;
	string catColor = " ";

	cout << "So you have three cats...\n\n";
	cout << "Describe Fluffy. What does she weigh? ";
	cin >> catWeight;
	cout << "What color is she? ";
	cin.ignore();
	getline(cin, catColor);
	
	// Object calls function setWeight to assign weight to the object fluffy's weight
	fluffy.setWeight(catWeight);
	// Object calls function setColor to assign color to the object fluffy's color
	fluffy.setColor(catColor);

	cout << "\nDescribe Tom. What does he weigh? ";
	cin >> catWeight;
	cout << "What color is he? ";
	cin.ignore();
	getline(cin, catColor);

	// Object calls function setWeight to assign weight to the object tom's weight
	tom.setWeight(catWeight);
	// Object calls function setColor to assign color to the object tom's color
	tom.setColor(catColor);

	cout << "\nDescribe Kitty. What does she weigh? ";
	cin >> catWeight;
	cout << "What color is she? ";
	cin.ignore();
	getline(cin, catColor);

	// Object calls function setWeight to assign weight to the object kitty's weight
	kitty.setWeight(catWeight);
	// Object calls function setColor to assign color to the object kitty's color
	kitty.setColor(catColor);

	// Outputting
	cout << "\n\nFluffy ";
	// displays fluffy's weight and color
	fluffy.displayCatInfo();
	cout << "Tom ";
	// displays tom's weight and color
	tom.displayCatInfo();
	cout << "Kitty ";
	// displays fluffy's weight and color
	kitty.displayCatInfo();

	// Cats meowing!
	cout << "\n\nFluffy";
	// displays the cat meowing
	fluffy.meow();
	cout << "Tom";
	// displays the cat meowing
	tom.meow();
	cout << "Kitty";
	// displays the cat meowing
	kitty.meow();

	return 0;
} // end of main()



/* ================================ Output =====================================
So you have three cats...

Describe Fluffy. What does she weigh? 4
What color is she? brown

Describe Tom. What does he weigh? 9
What color is he? orange

Describe Kitty. What does she weigh? 5
What color is she? white

Fluffy weighs 4 pounds and is brown.
Tom weighs 9 pounds and is orange.
Kitty weighs 5 pounds and is white.

Fluffy says: MEOW!
Tom says: MEOW!
Kitty says: MEOW!

Press any key to continue
*/
