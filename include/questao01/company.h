#ifndef _COMPANY_H
#define _COMPANY_H

/** TODO **/
#include <string>
#include <vector>
#include <istream>
#include "../../include/questao01/employee.h"

class Company
{
private:
public:
	int CNPJ;
	std::string name;
	static int total;
	std::vector<Employee*> employees;
/** Methods **/
	Company();
	~Company();
	give_raise(float tax);
	/** Getters and Setters 
	getName();
	setName();**/
/** Operators **/
	friend std::istream& operator>> (std::istream &i, Company &c);
};

#endif