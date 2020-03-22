#include "TvProgram.h"

TvProgram::TvProgram()
{
	title = "Nazvanie def";
	
}

TvProgram::TvProgram(string title, Time_ time)
{
	this->title = title;
	this->time = time;
}



void TvProgram::setTitle(string titlep)
{
	cout << "¬ведите название ";
	cin >> titlep;
	title = titlep;
}

string TvProgram::getTitle()
{
	return title;
}



void TvProgram::show()
{
	title = "0";
}

string TvProgram::type()
{
	return "0";
}
