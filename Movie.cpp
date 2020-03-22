#include "Movie.h"

Movie::Movie(string title, Time_ time, int year, string descr) :TvProgram(title, time)
{
	this->year = year;
	this->descr = descr;
}

Movie::~Movie()
{
}

void Movie::show()
{

	cout << "\nTitle: " << title
		<< "\nYEAR: " << year
	<< "\nDESCRIPTION: " << descr
		<< "\nTIME: " << time << endl;
}


string Movie::type()
{
	return "Movie";
}



