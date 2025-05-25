#pragma once
#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
protected: // protected since passFalActivity inherits it
	double minPassingScore;

public:
	// Default Constructor
	PassFailActivity();
	// Overloaded Constructor 
	PassFailActivity(double mps);
	// Destructor
	~PassFailActivity();

	// Member function that sets the mps from main() to minPassingScore in the class
	void setMinPassingScore(double mps);

	// returns the minPassingScore to main()
	double getMinPassingScore();
	
	// redefines the getLetterGrade() from "GradedActivity.h" to instead output "P" for pass or "F" for fail
	char getLetterGrade();

};