#pragma once
#include "TvProgram.h"
class Movie :
	public TvProgram
{

protected:
	int year;
	string descr;
public:
	Movie(string title, Time_ time,  int year, string descr);
	~Movie();
	virtual void show();
	virtual string type();

};

