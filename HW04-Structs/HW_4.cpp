// Attached: HW_4
// File: HW_4.cpp
// ============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// ============================================================================
// Program: Date Structured Data (HW_4)
// ============================================================================
// Description:
// This program prompts the user to enter the month, day, and year of the 
// current day and then returns the date of the next day (using struct data). 
// If the user doesnt enter the date properly, they are asked to reenter the 
// information. Once the program finishes, the user is asked if they want to 
// enter a different date. If they do, the program repeats. If they do not,
// the program ends. 
// ============================================================================
// ============================================================================

#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

// Structured Data Type
struct Date
{
	int month;
	int day;
	int year;
};

// Function Prototypes
void getDate(Date &);
bool isDateValid(Date);
void addOneDay(Date &);
void displayTomorrow(Date);

// ==== main ==================================================================
//
// ============================================================================
int main()
{
	// Declaring Variables
	Date today = { 0, 0, 0 };
	char yOrN = ' ';

	do //do-while loop to repeat program if the user wishes to.
	{
		// Function that gets data for today from the user.
		getDate(today);

		// Function that adds the date to determine what tomorrow will be.
		addOneDay(today);

		// Functon that ouputs tomorrows date
		displayTomorrow(today);

		cout << "\nDo it again? (Y/N)\t";
		cin >> yOrN; 

		yOrN = toupper(yOrN); //toupper to make the char uppercase

		system("cls"); // To clear the screen in every itteration 

	} while (yOrN != 'N');

	return 0;
} // end of main()	
// ============================================================================



// ==== getDate ===============================================================
// This function gets the date, in the correct format, from the user and puts
// it into the structured data type. If the user does not put it in the correct
// format, they are told the entry is invalid and asked to enter the 
// information again. This is validated through function isDateValid() which 
// returns true or false to the if statement. 
//
// Input:
// Information given from the user (t.month, t.day, t.year). Bool function
// isDateValid() is also called.
//
// Output:
// If the user enters the correct information, the "valid" bool variable 
// is returned as true. If the user enters it incorrectly, "valid" is
// returned as false and asks the user to enter the information again.
// This is repeated until the user enters correct information.
// ============================================================================

void getDate(Date &t)	
{
	//Declaring local variable
	bool valid = 0;

	cout << "Enter today's date in the following order:\n\tMM/DD/YYYY, (Month, Day, Year).\n" << endl;

	do //do-while statement for the user to enter information until it is correct
	{
		cout << "Month:\t";
		cin >> t.month;
		cout << "Day:\t";
		cin >> t.day;
		cout << "Year:\t";
		cin >> t.year;

		// Function that determines whether the user entered correct info or not
		valid = isDateValid(t); 

		if (valid == false) // if valid is false the questions repeat.
		{
			cout << "\nInvalid date.\n" << endl;
		}
	} while (valid != true); // When valid is true, the loop stops.

} // end of getDate()
// ============================================================================



// ==== isDatevalid ===========================================================
// This function deterimnes whether or not the info entered by the user, in
// function getDate(), is entered correctly (if it is, it is returned as true)
// or if it is not entered correctly (if it is not, it is returned as false). 
// The month can not be less than 1 or more than 12. The day can not be less
// than 1 or more than 30. The year can not be more than 2019. 
// 
// Input:
// t.month, t.day, and t.year from function getDate(). 
//
// Output
// Either true or false depending on the user's input. 
// ============================================================================

bool isDateValid(Date t)
{
	// Input validation 
	if (t.month <= 12 && t.month >= 1 && t.day <= 30 && t.day >= 1 && t.year >= 2019)
	{
		return true;
	}
	
	else
	{
		return false;
	}
} // end of isDateValid()
// ============================================================================




// ==== addOneDay =============================================================
// This function adds one day to the date given by the user so that it can tell
// tomorrows date. If the day goes over 30, then it gives the first day of the
// next month. If the month goes into the next year, then it sets it to the 
// first day of that year. 
// 
// Input:
// The inputs from the user in function getDate() (t.month, t.day, t.year). 
//
// Output:
// Day plus 1 (aka tomorrows date) given to main().
// ============================================================================

void addOneDay(Date &t)
{
	t.day++; // adds one day
	
	if (t.day == 31) // sets it to the first day of the next month
	{
		t.day = 1; 
		t.month++; // adds one month

		if (t.month == 13) // sets it to the fist month/day of the next year
		{
			t.month = 1;
			t.year++; // adds one year
		}
	}
} // end of addOneDay()
// ============================================================================



// ==== displayTomorrow =======================================================
// This function takes the new date (tomorrows date) that was sent to main by
// function addOneDay() and displays it to the console in this format:
// MM/DD/YYYY. 
// 
// Input:
// The new date given from addOneDay() to main(). 
// 
// Output:
// Tomorrows date is outputted to the console in the proper format. 
// ============================================================================

void displayTomorrow(Date t)
{
	cout << "\nAfter adding one day to today's date, tomorrow's date is ";
	cout << setw(2);
	cout.fill('0');
	cout << t.month << "/";

	if (t.day >= 10)
	{
		cout << t.day << "/";
	}

	else
	{
		cout << setw(2);
		cout.fill('0');
		cout << t.day << "/";
	}
	
	cout << t.year << endl;
} // end of displayTomorrow()
// ============================================================================




/*================================= Output ====================================
Enter today’s date in the following order:
   MM/DD/YYYY, (Month, Day, Year).

Month: 1
Day:   20
Year:  2020

After adding one day to today’s date, tomorrow’s date is 01/21/2020.

Do it again? (Y/N)  y

---- (screen clears) ----------------------------------------------------------
Enter today’s date in the following order:
   MM/DD/YYYY, (Month, Day, Year).

Month: 1
Day:   30
Year:  2020

After adding one day to today’s date, tomorrow’s date is 02/01/2020.

Do it again? (Y/N)  y

---- (screen clears) ----------------------------------------------------------
Enter today’s date in the following order:
   MM/DD/YYYY, (Month, Day, Year).

Month: 12
Day:   30
Year:  2020

After adding one day to today’s date, tomorrow’s date is 01/01/2021.

Do it again? (Y/N)  y

---- (screen clears) ----------------------------------------------------------
Enter today’s date in the following order:
   MM/DD/YYYY, (Month, Day, Year).

Month: 13
Day:   10
Year:  2020

Invalid date.

(PROGRAM REPEATS)
Month: 12
Day:   10
Year:  2020

After adding one day to today’s date, tomorrow’s date is 12/11/2020.

Do it again? (Y/N)  n
---- (screen clears) ----------------------------------------------------------

Press any key to close this window...
*/

