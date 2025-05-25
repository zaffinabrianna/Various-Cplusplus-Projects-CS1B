#pragma once
#include <iostream>
#include <string>
using namespace std;

class Presidents
{
private:
	int number;
	string name;
	string quote;

public:
	Presidents(); // default constructor
	~Presidents(); // destructor

	// Function member that sets the presidents number
	void setNumber(int number);

	// Function member that sets the presidents name
	void setName(string name);

	// Function member that sets the presidents quote
	void setQuote(string quote);

	// Function member that displays the presidents information.
	void displayPresidents();
	
	// Just a note: I was orginally going to do the defintions on here because you told us we could do it if it
	// is one line only, but the directions state to do it on the cpp file.
};
