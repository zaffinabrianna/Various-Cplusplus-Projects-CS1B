#include "PassFailExam.h"
// default constructor
PassFailExam::PassFailExam()
{
	numQuestions = 0;
	pointsEach = 0.0;
	numMissed = 0;
}

// overloaded constructor that inherits mps from PassFailActivity
PassFailExam::PassFailExam(int questions, int missed, double mps) : PassFailActivity(mps)
{
	set(questions, missed);
}

//destructor
PassFailExam::~PassFailExam()
{

}


// ==== set() ==================================================================
// This member function first assigns questions and missed from main() to 
// numQuestions and numMissed and then caculates them into their numericScore.
// This then sets the score to its numeric score.
//
// Input:
// questions and missed from main().
//
// Output:
// setScore() is called and assigns the numericScore to score. 
// =============================================================================

void PassFailExam::set(int questions, int missed)
{
	double numericScore;

	numQuestions = questions;
	numMissed = missed;

	pointsEach = 100.0 / numQuestions;

	numericScore = 100.0 - (missed * pointsEach);

	setScore(numericScore);
} // end of set()
// =============================================================================



// ==== getNumQuestions() ======================================================
// This member function returns numQuestions to main()
// 
// Input:
// No actual input
//
// Output:
// numQuestions is returned to main()
// =============================================================================

double PassFailExam::getNumQuestions()
{
	return numQuestions;
} // end of getNumQuestions()
// =============================================================================



// ==== getPointsEach() ========================================================
// This member function returns pointsEach to main()
//
// Input:
// No actual input
// 
// Output:
// pointsEach is returned to main()
// =============================================================================

double PassFailExam:: getPointsEach()
{
	return pointsEach;
} // end of getPointsEach()
// =============================================================================




// ==== getNumMissed() =========================================================
// This member function returns numMissed to main()
//
// Input:
// No actual input
//
// Output:
// numMissed is returned to main()
// =============================================================================

double PassFailExam::getNumMissed()
{
	return numMissed;
} // end of getNumMissed()
// =============================================================================