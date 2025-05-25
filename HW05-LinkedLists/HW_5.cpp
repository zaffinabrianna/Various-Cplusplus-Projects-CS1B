// Attatched: HW_5
// File: HW_5.cpp
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Linked List of Box Records (HW_5)
// =============================================================================
// Description:
// The user inputs the amount of boxes, and the width, length, and height of the
// boxes, and all of this gets stored into a linked list. The list of boxes'
// ID and specifications are then outputted to the user. The user is then asked
// to delete a box. When the user gives the box ID that is to be deleted, the
// new list is then outputted.
// =============================================================================
// =============================================================================

#include <iostream>
#include <ctype.h>
#include <iomanip>
using namespace std;

struct Box
{
	int id;
	float width;
	float height;
	float length;
	Box* next;
};

// Function Prototypes
void insertInfo(Box*& head);
void showBoxList(Box*& head);
void deleteBox(Box*& head);

// ==== main ===================================================================
//
// =============================================================================

int main()
{
	// Declaring variables
	Box* head = nullptr;
	int stop = 0;
	char yOrN = ' ';
	cout << "Enter the specifications of different types of boxes." << endl;
	cout << "Include the number of boxes presently in inventory." << endl;
	cout << "Enter boxes - (-1 to quit) :" << endl;

	do // do while loop to continue asking the user to enter box info
	{
		insertInfo(head);

		cin >> stop;

	} while (stop != -1); // Sentinal value of -1 to stop entering info
	

	cout << "\nWould you like to see the list of boxes (Y/N)?\t";
	cin >> yOrN;
	yOrN = toupper(yOrN);

	if (yOrN == 'Y') // if the user choses 'Y' (yes), then show the list.
	{
		// Function that shows list of boxes
		showBoxList(head);
	}

	// Function that asks user to enter a box ID to delete, and then deletes that box
	deleteBox(head);
	
	// Function is called again to output the new list of boxes
	showBoxList(head);

	return 0;
} // end of main()
// =============================================================================




// ==== instertInfo ============================================================
// This function asks the user to insert the ID number, width, height, and length
// of the boxes they want to put into the list. This is then passed to main().
//
// Input:
// The ID number, width, height, and length which are determined by the user.
//
// Output:
// All this information is passed into the list and passed to main().
// =============================================================================	

void insertInfo(Box*& head)
{
	Box* temp = new Box;

	// These cin statements ask the user for the ID number, width, height, and length of the boxes
	cout << "ID Number:\t";
	cin >> temp->id;
	
	cout << "Width:\t";
	cin >> temp->width;
	
	cout << "Height:\t";
	cin >> temp->height;

	cout << "Length:\t";
	cin >> temp->length;	

	temp->next = head;
	head = temp;
} // end of instertInfo()
// =============================================================================




// ==== showBoxList ============================================================
// This function takes the data stored in the link list and outputs it to the
// user.
// 
// Input:
// The user inputted values that were stored inside of the link list with the 
// data type of Box. 
// 
// Output:
// The boxes, and the box info, that the user entered are outputted to the user.
// =============================================================================

void showBoxList(Box*& head)
{
	system("CLS"); // Clears the screen

	Box* temp = head;
	
	cout << "Types of boxes:\n\n";

	cout << "ID#\t\tWidth\t\tHeight\t\tLength" << endl;
	cout << "------------------------------------------------------" << endl;

	while (temp != nullptr) // While the temp variable is not a null pointer (aka the not the last item) output the info.
	{
		cout << temp->id << "\t\t";
		cout << fixed << setprecision(2) << temp->width << "\t\t";
		cout << fixed << setprecision(2) << temp->height << "\t\t";
		cout << fixed << setprecision(2) << temp->length << endl;

		temp = temp->next; // Sets it to the next box to output
	}
} // end of showBoxList()
// =============================================================================




// ==== deleteBox ==============================================================
// This function first makes sure the list is not empty then asks the user to
// enter a box ID to delete out of the list. It then deletes the box the user
// entered from the list and clears the screen.
// 
// Input:
// The box ID that the user wants to delete.
// 
// Output:
// The screen is cleared and information is passed to main(). 
// =============================================================================

void deleteBox(Box*& head)
{
	Box* lead = head;
	Box* follow = head;
	int deleteID = 0;

	if (head == nullptr) // If the first item in the list is null, then there is nothing in the list.
	{
		cout << "The list is empty.\n";
		return;
	}

	cout << "\nEnter the ID of the box to be deleted:\t";
	cin >> deleteID;

	while (lead->id != deleteID && lead->next != nullptr) // If it isnt the number user is looking for, go next
	{
		follow = lead;
		lead = lead->next;
	}

	if (lead == head) 
	{
		if (lead->id == deleteID) // If the the head equals the ID the user wants to delete, then delete that box
		{
			head = head->next;
			delete lead;
		}

		else // If it isnt, it isnt in the list
		{
			cout << "ID is not in the list\n\n";
			return;
		}
	}

	else if (lead->next == nullptr) 
	{
		if (lead->id == deleteID) // If the ID is the last box in the list, then delete that ID
		{
			follow->next = lead->next;
			delete lead;
		}

		else // If it isnt, it isnt in the list
		{
			cout << "ID is not in the list\n\n";
		}
	}

	else // If it is in the middle of the list.
	{
		follow->next = lead->next;
		delete lead;
	}

	system("CLS");
} // end of deleteBox()
// =============================================================================





/* ================================== Output ===================================
Enter the specifications of different types of boxes.
Include the number of boxes presently in inventory.
Enter boxes - (-1 to quit):

ID Number: 100
width: 3.25
height: 2.50
length: 3.50
1
ID Number: 101
width: 4.00
height: 8.50
length: 6.5
1
ID Number: 102
width: 3.50
height: 5.00
length: 7.75
1
ID Number: 103
width: 2.75
height: 3.75
length: 9.00
-1

Would you like to see the list of boxes (Y/N)? y
----------- (Screen Clears) -----------------------------
Types of boxes:

ID#             Width           Height          Length
------------------------------------------------------
103             2.75            3.75            9.00
102				3.50			5.00			6.50
101				4.00			8.50			6.50	
100				3.25			2.50			3.50

Enter the ID of the box to be deleted: 101
--- (Screen Clears and the list is displayed) ----------
Types of boxes:

ID#             Width           Height          Length
------------------------------------------------------
103             2.75            3.75            9.00
102				3.50			5.00			6.50
100				3.25			2.50			3.50
*/
