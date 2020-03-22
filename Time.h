
#include <iostream>

using namespace std;

class Time_
{

public:
	int h;
	int m;

	Time_();
	

	Time_(const int& ho, const int& mi);

	Time_& operator -- ();
	Time_& operator -- (int n);
	Time_& operator ++ ();
	Time_& operator ++ (int n);

	void setTime(int h, int m);
	int geTime();


	friend ostream& operator << (ostream& os, Time_& t);
	friend istream& operator >> (istream& is, Time_& t);

	void ShowT();
};
