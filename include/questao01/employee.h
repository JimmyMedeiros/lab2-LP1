#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

class Employee
{
public:
	std::string name;
	std::string admission_date;
	int CPF;
	float wage;
	static int total;
/** Methods **/
	Employee();
	~Employee();

/** Operators **/
	friend std::istream& operator>> (std::istream &i, Employee &c);
};

#endif