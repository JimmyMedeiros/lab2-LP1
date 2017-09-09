#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
#include <ctime>
#include "../../include/questao01/date.h"

class Employee
{
	size_t CPF;
public:
	std::string name;
	Date admission_date;
	float wage;
	static int total;
/** Methods **/
	Employee();
	~Employee();

/** Operators **/
	friend std::istream& operator>> (std::istream &i, Employee &e);
	friend std::ostream& operator<< (std::ostream &o, Employee &e);
	bool operator== (Employee const & e);
};

#endif