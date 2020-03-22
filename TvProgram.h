#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Time.h"
using namespace std;
class TvProgram
{
protected:
	string title;
	Time_ time;

public:
	TvProgram();
	TvProgram(string title , Time_  time);
	~TvProgram() {};
	void setTitle(string titlep);
	string getTitle();


	virtual void show();
	virtual string type();
	
};

