#ifndef _DATE_H
#define _DATE_H

/** TODO **/
#include <string>
#include <vector>
#include <istream>

class Date
{
private:
	int year, month, day;
public:
/** Methods **/
	Date(int _day, int _month, int _year);
	Date();
/** Getters and Setters **/ 
	int getYear();
	int getMonth();
	int getDay();

	void setYear();
	void setMonth();
	void setDay();
/** Operators **/
	friend std::istream& operator>> (std::istream &i, Date &d);
	friend std::ostream& operator<< (std::ostream &o, Date &d);
	Date operator+ (Date &d);
};

#endif