// Attached: HW_7b
// File: Source.cpp, Presidents.cpp, Presidents.h
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Presidents Class (HW_7b)
// =============================================================================
// Description:
// This program uses a class named Presidents to get three president names, 
// thier numbers, and a quote of theirs. This information is stored in their 
// own objects and is then outputted to the console.  
// =============================================================================
// =============================================================================
#include "Presidents.h" 


// ==== main ===================================================================
//
// =============================================================================
int main()
{
	// Variabes
	int number = 0;
	string name = " ";
	string quote = " ";

	// Objects
	Presidents president1;
	Presidents president2;
	Presidents president3;

	
	cout << "Enter the first president's number: ";
	cin >> number;
	cin.ignore();

	cout << "Enter his name: ";
	getline(cin, name);

	cout << "Enter his quote: ";
	getline(cin, quote);

	// Sets all of the first presidents information to the president1 object. 
	president1.setNumber(number);
	president1.setName(name);
	president1.setQuote(quote);
	
	cout << "\n\nEnter the second president's number: ";
	cin >> number;
	cin.ignore();

	cout << "Enter his name: ";
	getline(cin, name);

	cout << "Enter his quote: ";
	getline(cin, quote);

	// Sets all the second presidents information to the president2 object.
	president2.setNumber(number);
	president2.setName(name);
	president2.setQuote(quote);

	cout << "\n\nEnter the third president's number: ";
	cin >> number;
	cin.ignore();

	cout << "Enter his name: ";
	getline(cin, name);

	cout << "Enter his quote: ";
	getline(cin, quote);

	// Sets all the second presidents information to the president3 object.
	president3.setNumber(number);
	president3.setName(name);
	president3.setQuote(quote);

	cout << "\nThe presidents are:\n";
	// Displays president1 object's president name, number, and quote
	president1.displayPresidents();
	// Displays president2 object's president name, number, and quote
	president2.displayPresidents();
	// Displays president3 object's president name, number, and quote
	president3.displayPresidents();
	
	return 0;
} // end of main()



/* ================================ Output =====================================
Enter the first president’s number: 37
Enter his name: Richard Nixon
Enter his quote: I am not a crook

Enter the second president’s number: 45
Enter his name: Donald Trump
Enter his quote: Is our country still spending money on the GLOBAL WARMING HOAX?

Enter the third president’s number: 42
Enter his name: Bill Clinton
Enter his quote: I did not have sexual relations with that woman.

The presidents are:
Richard Nixon, 37th president, said:
	“I am not a crook.”
Donald Trump, 45th president, said:
	“Is our country still spending money on the GLOBAL WARMING HOAX?”
Bill Clinton, 42nd president, said:
	“I did not have sexual relations with that woman.”

Press any key to continue
*/