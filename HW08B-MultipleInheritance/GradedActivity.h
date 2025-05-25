#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class GradedActivity
{
protected: // Protected since it is a mother to other objects
	double score;

public:
	// Default Constructor
	GradedActivity();

	// "Overloaded" Constructor
	GradedActivity(double testScore);

	// Destructor
	~GradedActivity();

	// sets the test score given from main to the one in the class
	void setScore(double testScore);

	// returns the score to main
	double getScore();

	// This returns the letter grade A-F
	char getLetterGrade();
};