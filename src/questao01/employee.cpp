/**
 * @file employee.cpp
 */
#include <iostream>
#include <string>

#include "../../include/questao01/employee.h"
#include "../../include/questao01/date.h"

int Employee::total = 0;

/**
* @brief Função que calcula a área de um triângulo equilátero
* @param side Um valor inteiro positivo, o tamanho do lado do triângulo
* @return Um valor float com a área do triângulo
*/
Employee::Employee(){
	/** TODO **/
	total++;
}
Employee::~Employee(){
	/** TODO **/
	total--;
}
std::istream & operator>> (std::istream & i, Employee & e) {
	//int d, m, y;
	std::cout << "Digite o nome do funcionário:\n";
	i.ignore(1); // Ignora exatamente o caracter '\n'
	std::getline (i, e.name);
	std::cout << "Digite o CPF do funcionário:\n";
	i >> e.CPF;
	std::cout << "Digite a data de admissão:\n";
	i >> e.admission_date;
	std::cout << "Digite o salário do funcionário:\n";
	i >> e.wage;
	return i;
}
std::ostream & operator<< (std::ostream & o, Employee & e){
	o << "Nome: " << e.name;
	o << "\nCPF: " << e.CPF;
	o << "\nData de admissão: " << e.admission_date;
	o << "Salário: " << e.wage << "\n";
	return o;
}