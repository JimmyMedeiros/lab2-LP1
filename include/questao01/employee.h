#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

class Employee
{
	std::string name;
	std::string admission_date;
public:
	int CPF;
	float wage;
	Employee();
	~Employee();
};

#endif