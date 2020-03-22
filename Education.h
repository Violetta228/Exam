#pragma once
#include "TvProgram.h"
class Education :
	public TvProgram
{

protected:

	string science;
public:
	Education(string title, Time_ time,  string science);
	~Education();
	virtual void show();
	virtual string type();

};

