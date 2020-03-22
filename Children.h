#pragma once
#include "TvProgram.h"
class Children :
	public TvProgram
{

protected:
	int maxAge;
	int minAge;
public:
	Children(string title, Time_ time, int minAge, int maxAge);
	~Children();
	virtual void show();
	virtual string type();
	
};

