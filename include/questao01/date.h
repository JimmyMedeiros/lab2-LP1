#ifndef _DATE_H
#define _DATE_H

/** TODO **/
#include <string>
#include <vector>
#include <istream>

class Date
{
private:
	size_t year, month, day;
public:
/** Methods **/
	Date(size_t _day, size_t _month, size_t _year);
	Date();
/** Getters and Setters **/ 
	size_t getYear();
	size_t getMonth();
	size_t getDay();

	void setYear(size_t _year);
	void setMonth(size_t _month);
	void setDay(size_t _day)	;
/** Operators **/
	friend std::istream& operator>> (std::istream &i, Date &d);
	friend std::ostream& operator<< (std::ostream &o, Date &d);
	//friend Date operator+ (Date &d);
};

#endif