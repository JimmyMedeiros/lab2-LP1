#include <iostream>
#include <cstdlib>
#include <string>
#include <typeinfo>

#include "../../include/questao01/employee.h"
#include "../../include/questao01/company.h"

int main(int argc, char const *argv[]){
	
	Employee *empregado = new Employee();
	Company *empresa = new Company();

	empregado->wage = 1000.50;
	std::cout << empregado->wage << std::endl;
	empresa->CNPJ = 5050;
	empresa->employees.push_back(*(&empregado));
	std::cout << empresa->CNPJ << std::endl;
	
	std::vector<Employee*>::iterator it = empresa->employees.begin();

	Employee emp = *(*it);
	float sal = emp.wage;

	std::cout << sal << std::endl;

	return 0;
}