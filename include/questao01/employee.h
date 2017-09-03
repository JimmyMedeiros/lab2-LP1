#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

class Employee
{
public:
	std::string name;
	std::string admission_date;
	static int total;
	int CPF;
	float wage;
/** Methods **/
	Employee();
	~Employee();
};

#endif