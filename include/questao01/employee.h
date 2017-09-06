#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
#include "../../include/questao01/date.h"

class Employee
{
public:
	std::string name;
	Date admission_date;
	size_t CPF;
	float wage;
	static int total;
/** Methods **/
	Employee();
	~Employee();

/** Operators **/
	friend std::istream& operator>> (std::istream &i, Employee &e);
	friend std::ostream& operator<< (std::ostream &o, Employee &e);
};

#endif