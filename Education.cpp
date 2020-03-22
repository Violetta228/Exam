#include "Education.h"

Education::Education(string title, Time_ time, string science) :TvProgram(title, time)
{
	this->science = science;
}


Education::~Education()
{
}

void Education::show()
{

	cout << "\nTitle: " << title
		<< "\nKIND OF SCIENCE: " << science
		<< "\nTIME: " << time << endl;
}


string Education::type()
{
	return "Education";
}


