#include <iostream>
#include <cstdlib>
#include <string>
#include <typeinfo>
#include <limits>

#include "employee.h"
#include "company.h"
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
bool error_handler (){
	if (not(std::cin)){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits <streamsize> ::max(), '\n');
		std::cerr << "\nValor inválido. Tente novamente.\n";
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	string opt = "--";
	std::vector<Company*> empresas;
	
	while (opt.at(0) != 0)
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
		
		if (opt.size() == 1 and not error_handler(opt.at(0)))
		{
			switch (opt.at(0))
			{
				case 1:
				{
					//std::cin.ignore(std::numeric_limits<std::streamsize>::max());
					cout << "==== Cadastrando empresa ====" << endl;
					Company *empresa = new Company();
					cin >> (*empresa);
					bool found = false;
					for (std::vector<Company*>::iterator it2 = empresas.begin(); it2 != empresas.end(); ++it2)
							{
						if ((**it2) == (*empresa))
						{
							cerr << "Uma empresa com esse CNPJ já foi cadastrado.\n";
							found = true;
						}
					}
					if (not error_handler() and not found) empresas.push_back(empresa);
					else delete empresa;
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
							bool found = false;
							for (std::vector<Employee*>::iterator it2 = empresas.at(opt2)->employees.begin(); it2 != empresas.at(opt2)->employees.end(); ++it2)
							{
								if ((**it2) == (*empregado))
								{
									cerr << "Um funcionário com esse CPF já foi cadastrado.\n";
									found = true;
								}
							}
							if (not error_handler() and not found) empresas.at(opt2)->employees.push_back(empregado);
						}
					}
					break;
				case 3:
					if (Company::total < 1)
					{
						std::cout << "Nenhuma empresa foi cadastrada ainda\n";
					}
					else
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
					if (Company::total < 1)
					{
						std::cout << "Nenhuma empresa foi cadastrada ainda\n";
					}
					else
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
					break;
				case 5:
					if (Company::total < 1)
					{
						std::cout << "Nenhuma empresa foi cadastrada ainda\n";
					}
					else
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
							if ((*(*it2)).admission_date.countDays() < 90)
								cout << (*(*it2)) << endl;
						}
					}
					break;
				default:
					break;
			}
		}
		else
		{
			cerr << "Digite uma opção válida.\n";
		}
	}
	return 0;
}
