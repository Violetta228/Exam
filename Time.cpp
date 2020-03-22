#include "Time.h"


Time_::Time_()
{
	h = 0; m = 0; 
}

Time_::Time_(const int& h, const int& m)
{
	this->h = h;
	this->m = m;
	
}

Time_& Time_::operator--()
{
	// TODO: insert return statement here
	this->m--; return *this;
}

Time_& Time_::operator--(int n)
{
	// TODO: insert return statement here
	cin >> n;
	this->m = m - n; return *this;
}

Time_& Time_::operator++()
{
	// TODO: insert return statement here
	this->m++; return *this;
}

Time_& Time_::operator++(int n)
{
	// TODO: insert return statement here
	cin >> n;
	this->m = m + n;
	return *this;
}

void Time_::setTime(int h, int m)
{
	cout << "¬ведите часы ";
	cin >> h;
	cout << "¬ведите минуты ";
	cin>>m;

}

int Time_::geTime()
{
	return h,m;
}

void Time_::ShowT()
{
	cout << h << " : " << m  << endl;
}

ostream& operator<<(ostream& os, Time_& t)
{
	// TODO: insert return statement here
	
	os << t.h << ":" << t.m;
	return os;
}

istream& operator>>(istream& is, Time_& t)
{
	cout << "¬ведите часы ";
	cin >> t.h;
	cout << "¬ведите минуты ";
	cin >> t.m;
	
	return is;
}
