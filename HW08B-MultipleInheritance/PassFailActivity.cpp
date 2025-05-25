#include "PassFailActivity.h"
// Default Constructor
PassFailActivity::PassFailActivity()
{
	minPassingScore = 0;
}

// Overloaded Constructor, assigns mps from main() to minPassingScore() in the class
PassFailActivity::PassFailActivity(double mps)
{
	minPassingScore = mps;
}

// Destructor 
PassFailActivity::~PassFailActivity()
{

}


// ==== setMinPassingScore() ===================================================
// This member function sets the mps from main() to the minPassingScore in the 
// class.
//
// Input:
// mps variable from main()
// 
// Output:
// No actual output, but sets mps to minPassingScore.
// =============================================================================

void PassFailActivity::setMinPassingScore(double mps)
{
	minPassingScore = mps;
} // end of setMinPassingScore()
// =============================================================================



// ==== getMinPassingScore() ===================================================
// This member function returns minPassingScore to main().
// 
// Input:
// No actual input
//
// Output:
// minPassingScore is returned to main()
// =============================================================================

double PassFailActivity :: getMinPassingScore()
{
	return minPassingScore;
} // end of getMinPassingScore()
// =============================================================================



// ==== getLetterGrade() =======================================================
// This function redefines getLetterGrade() in GradedActivity class. Instead of
// outputting a letter grade, it outputs "P" or "F" depending on if the grade
// is higher than the minnimum passing score or not. 
// 
// Input: 
// the values of score and minPassingScore are used in the if statement.
//
// Output:
// Either "P" or "F" are outputted to main depending on if the score is higher 
// than the missing passing score or not.
// =============================================================================

char PassFailActivity::getLetterGrade()
{
	if (score >= minPassingScore)
	{
		return 'P';
	}

	else
	{
		return 'F';
	}
} // end getLetterGrade()
// =============================================================================