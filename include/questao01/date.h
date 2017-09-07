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

	void setYear(int _year);
	void setMonth(int _month);
	void setDay(int _day)	;
/** Operators **/
	friend std::istream& operator>> (std::istream &i, Date &d);
	friend std::ostream& operator<< (std::ostream &o, Date &d);
	//friend Date operator+ (Date &d);
};

#endif