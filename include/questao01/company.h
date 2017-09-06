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
	int ID;
public:
	size_t CNPJ;
	std::string name;
	static int total;
	std::vector<Employee*> employees;
/** Methods **/
	Company();
	~Company();
	void give_raise(float tax);
	/** Getters and Setters**/ 
	int getID();
	/**getName();
	setName();**/
/** Operators **/
	friend std::istream& operator>> (std::istream &i, Company &c);
};

#endif