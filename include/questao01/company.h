#ifndef _COMPANY_H
#define _COMPANY_H

/** TODO **/
#include <string>
#include <vector>
#include "../../include/questao01/employee.h"

class Company
{
	std::string name;
public:
	int CNPJ;
	std::vector<Employee*> employees;
	Company();
	~Company();
};

#endif