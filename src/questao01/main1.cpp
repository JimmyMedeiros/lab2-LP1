#include <iostream>
#include <cstdlib>
#include <string>
#include <typeinfo>

#include "../../include/questao01/employee.h"
#include "../../include/questao01/company.h"

int main(int argc, char const *argv[]){
	char opt = -1;
	std::vector<Company*> empresas;
	std::cout << "Criando empresa\n";
				/** TODO **/
	Company *empresa = new Company();
	empresa->CNPJ = 5050;
	empresas.push_back(empresa);
	std::vector<Company*>::iterator it = empresas.begin();

	while (opt != 0){
		std::cout << "\nEscolha uma das opções abaixo:\n"
		<< "(1) Criar empresa\n"
		<< "(2) Adicionar Funcionário\n"
		<< "(0) Sair\n"
		<< "Digite a sua opção: \n";
		std::cin >> opt;
		
		if (not isdigit(opt) or (opt > '2')){
			std::cout << "\nOpção inválida. Por favor, digite uma opção válida\n\n";
		} 
		else {
			opt = atoi((const char*) &opt);
		}

		switch (opt){
			case 1:
			{
				std::cout << "Criando empresa\n";
				/** TODO **/
				Company *empresa = new Company();
				empresa->CNPJ = 5050;
				empresas.push_back(empresa);
			}
				break;
			case 2:
			{
				std::cout << "Escolha uma empresa para cadastrar o funcionário\n";
				/** TODO : Verify if the vector of employees was inicialized **/
				Employee *empregado = new Employee();
				empregado->wage = 937.00;
				std::vector<Company*>::iterator it = empresas.begin();
				(*it)->employees.push_back(empregado);
			}
				break;
			default:
				break;
		}
	}


	/**std::cout << it->CNPJ << std::endl;
	
	std::vector<Employee*>::iterator it2 = it->employees.begin();

	Employee emp = *(*it2);
	float sal = emp.wage;

	std::cout << sal << std::endl;**/

	return 0;
}
