#include "Show.h"

Show::Show(string title, Time_ time, string tema) :TvProgram(title, time)
{
	this->tema = tema;
}


Show::~Show()
{
}

void Show::show()
{
	cout << "\nTitle: " << title
		<< "\nTHEME: " << tema
		<< "\nTIME: " << time << endl;
}

string Show::type()
{
	return "Show";
}