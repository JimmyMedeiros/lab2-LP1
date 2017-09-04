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
		<< "(4) Dar aumento a funcionários\n"
		<< "(5) Listar funcionários em experiência\n"
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
					cout << "==== Cadastrando funcionário ====" <<
					"\nEscolha uma empresa para cadastrar o funcionário\n";
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
						cin >> (*empregado);
						empresas.at(opt2)->employees.push_back(empregado);
					}
				}
				break;
			case 3:
				{
					int j = 0;
					int opt2;
					cout << "Escolha qual empresa você quer listar os funcionários\n";
					for (it = empresas.begin() ; it != empresas.end(); ++it)
					{
						cout << "(" << (empresas.at(j))->getID() << ")" << (empresas.at(j))->name << endl;
						j++;
					}
					cin >> opt2;
					cout << "= Lista de funcionários: " << endl;
					vector<Employee*>::iterator it2 = (empresas.at(opt2))->employees.begin();
					for (; it2 != empresas.at(opt2)->employees.end(); ++it2)
					{
						cout << (*(*it2)) << endl;
					}
				}
				break;
			case 4:
				{
					float aumento;
					int opt2, j = 0;
					cout << "Escolha em qual empresa você quer dar o aumento:\n";
					for (it = empresas.begin() ; it != empresas.end(); ++it)
					{
						cout << "(" << j << ")" << (empresas.at(j))->name << endl;
						j++;
					}
					cin >> opt2;
					cout << "Digite a porcentagem do aumento.\n(Digite um valor decimal, por exemplo, se o aumento é de 50%% digite \"0.5\"\n";
					cin >> aumento;
					(empresas.at(opt2))->give_raise(aumento);
				}
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
