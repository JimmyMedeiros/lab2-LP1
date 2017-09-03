#include <iostream>
#include <cstdlib>
#include <string>
#include <typeinfo>
#include <limits>

#include "../../include/questao01/employee.h"
#include "../../include/questao01/company.h"
using namespace std;

/** 
* @brief Esse programa retorna verdadeiro caso haja erro ao ler uma variável pelo istream
* @param Recebe um inteiro que deveria ter recebido o valor, em caso de não haver erro
* @return Retorna true caso tenha ocorrido erro ou false caso a leitura tenha sido bem sucedida
**/
bool error_handler (char &option){
	if (not(std::cin)){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits <streamsize> ::max(), '\n');
		std::cerr << "\nValor inválido. Tente novamente.\n";
		return true;
	}
	if (not isdigit(option))
	{
		std::cout << "\nOpção inválida. Por favor, digite um número.\n";
		return true;
	}
	else
	{
		option = atoi((const char*) &option);
	}
	if (option < 0)
	{
	 	std::cerr << "Por favor digite apenas valores inteiros positivos.\n";
	}

	return false;
}

int main(int argc, char const *argv[])
{
	char opt = -1;
	std::vector<Company*> empresas;
	
	while (opt != 0)
	{
		std::vector<Company*>::iterator it = empresas.begin();
		std::cout << "\nEscolha uma das opções abaixo:\n"
		<< "(1) Criar empresa\n"
		<< "(2) Adicionar funcionário\n"
		<< "(3) Listar funcionários de uma empresa\n"
		<< "(0) Sair\n"
		<< "Digite a sua opção: \n";
		std::cin >> opt;
		
		error_handler(opt);

		switch (opt)
		{
			case 1:
			{
				cout << "==== Cadastrando empresa ====\n";
				Company *empresa = new Company();
				cin >> (*empresa);
				empresas.push_back(empresa);
			}
				break;
			case 2:
				if (Company::total < 1)
				{
					std::cout << "Nenhuma empresa foi cadastrada ainda\n";
				}
				else
				{
					std::cout << "Escolha uma empresa para cadastrar o funcionário\n";
					/** TODO **/
					Employee *empregado = new Employee();
					//empregado->wage = 937.00;
					int i = 0;
					char opt2;
					for (it = empresas.begin() ; it != empresas.end(); ++it)
					{
						cout << "(" << i << ")" << (empresas.at(i))->name << endl;
						i++;
					}
					cin >> opt2;
					if (not error_handler(opt2))
					{
						empresas.at(opt2)->employees.push_back(empregado);
					}
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
