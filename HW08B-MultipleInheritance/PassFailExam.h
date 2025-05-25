#pragma once
#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity
{
private:
	int numQuestions;
	double pointsEach;
	int numMissed;
	
public:
	// default constructor
	PassFailExam();
	// overloaded constructor that inherits from PassFailActivity
	PassFailExam(int questions, int missed, double mps);
	// destructor
	~PassFailExam();

	// sets the variables from main() to the one in the class
	void set(int questions, int missed);

	// returns the numQuestions to main()
	double getNumQuestions();
	// returns the pointsEach to main()
	double getPointsEach();
	// returns the numMIssed to main()
	double getNumMissed();
};