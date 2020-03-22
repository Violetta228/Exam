#include "Children.h"


Children::Children(string title, Time_ time, int minAge , int maxAge) :TvProgram(title, time)
{
	this->maxAge = maxAge;
	this->minAge = minAge;
}

Children::~Children()
{
}

void Children::show()
{

	cout << "\nTitle: " << title
		<< "\nMIN AGE TO WATCH: " << minAge
		<< "\nMAX AGE TO WATCH: " << maxAge
		<< "\nTIME: " << time << endl;
}


	string Children::type()
	{
		return "Children";
	}
	

