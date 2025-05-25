// Attached: HW_8b
// File: Source.cpp, GradedActivity.h, GradedActivity.cpp, PassFailActivity.h,
// PassFailActivity.cpp, PassFailExam.h, PassFailExam.cpp
// =============================================================================
//
// Programmer: Brianna Zaffina
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Multiple Inheritance (HW_8b)
// =============================================================================
// Description:
// This code asks the user to give the amount of questions, missed questions, 
// minnimum passing score in order to determine whether a student passed
// or failed. It uses inheritance to work through all the given information.
// Instead of outputting the letter grade, the PassFailAcitvity changes
// the defintion and makes it so it either outputs "P" or "F". After everything,
// the coded then outputs the student's test grade and whether they passed or
// failed.
// =============================================================================
// =============================================================================
#include "PassFailExam.h"

// ==== main ===================================================================
//
// =============================================================================
int main()
{
	//Decarling Variables (these are passed to the classes)
	int questions;
	int missed;
	double minPassing;

	// GradedActivity class object is defined with a grade of 88.0
	GradedActivity exam_1(88.0);

	// Outputs the letter grade that the student got. 
	cout << "The student's grade on Exam #1 is: " << exam_1.getLetterGrade() << endl << endl;
	cout << "_______________________________________\n\n";

	// Asks user how many questions there are on the exam
	cout << "How many questions are on the exam? ";
	cin >> questions;

	//Asks user how many questions the student missed
	cout << "How many questions did the student miss? ";
	cin >> missed;

	//Asks user for the min passing score for the test.
	cout << "Enter the minimum passing score for this test: ";
	cin >> minPassing;

	// All this information is passed into the PassFailExam object
	PassFailExam exam_2(questions, missed, minPassing);

	// This outputs all the information
	cout << fixed << setprecision(1);
	cout << "\nEach question counts " << exam_2.getPointsEach() << " points.\n";

	cout << "The minimum passing score is " << exam_2.getMinPassingScore() << endl;

	cout << "The student's exam score is " << exam_2.getScore() << endl;

	// getLetterGrade() is redefined in the class, so instead it outputs "P" or "F"
	cout << "The student's grade on Exam #2 is " << exam_2.getLetterGrade() << endl;

	return 0;
} // end of main()


/* =============================== Output ======================================
The student's grade on Exam #1 is: B

_______________________________________

How many questions are on the exam? 30
How many questions did the student miss? 3
Enter the minimum passing score for this test: 21

Each question counts 3.3 points.
The minimum passing score is 21.0
The student's exam score is 90.0
The student's grade on Exam #2 is P
*/