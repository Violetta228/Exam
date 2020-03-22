#pragma once
#include "Children.h"
#include "Education.h"
#include "Show.h"
#include "Movie.h"
#include <vector>
#include <list>
#include "TvProgram.h"
#include <iterator>
#include <algorithm>
#include <windows.h>



	class dayProgram
	{
		int nProg;
		TvProgram** arr;
		 vector <TvProgram> vec;
	public:
		dayProgram();
		~dayProgram();
	
		void showAll();
		void sort();
		void showbyTime();
		void findbyType(string type);
		void addProg(TvProgram* obj);
		void delProg(string title);
		void addnProg();
	};



