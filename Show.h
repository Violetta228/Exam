#pragma once
#include "TvProgram.h"
class Show :
	public TvProgram
{

protected:
	string tema;

public:
	Show(string title, Time_ time, string tema);
	~Show();
	virtual void show();
	virtual string type();

};

