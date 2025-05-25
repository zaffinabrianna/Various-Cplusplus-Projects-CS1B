#include "GradedActivity.h"

// Default Constructor
GradedActivity::GradedActivity()
{
	score = 0.0;
}

// Overloaded Constructor
GradedActivity:: GradedActivity(double testScore)
{
	score = testScore;
}

// Destructor
GradedActivity::~GradedActivity()
{

}

// ==== setScore ===============================================================
// This member function takes the testScore from main and assigns it to the 
// score variable in the class.
// 
// Input:
// testScore from main()
// 
// Output:
// No actual output, but score is now assigned the information from testScore
// =============================================================================
void GradedActivity:: setScore(double testScore)
{
	score = testScore;
} // end of setScore()
// =============================================================================



// ==== getScore() =============================================================
// This member function returns the information of score to main
// 
// Input:
// No actual input
//
// Output:
// Returns score to main()
// =============================================================================
double GradedActivity::getScore()
{
	return score;
} // end of getScore()
// =============================================================================



// ==== getLetterGrade() =======================================================
// This member function returns letters "A" - "F" depending on what grade the
// student got. 
//
// Input:
// score's value is used in the if statements to determine the letter grade the
// student will get.
//
// Output:
// letter grades of "A" - "F" are outputted to the console.
// =============================================================================

char GradedActivity::getLetterGrade()
{
	if (score >= 90)
	{
		return 'A';
	}

	if (score <= 89 && score >= 80)
	{
		return 'B';
	}

	if (score <= 79 && score >= 70)
	{
		return 'C';
	}

	if (score <= 69 && score >= 60)
	{
		return 'D';
	}

	if (score <= 59)
	{
		return 'F';
	}
} // end getLetterGrade()
// =============================================================================