/**
 * @file company.cpp
 */
#include <iostream>
#include <string>

#include "../../include/questao01/company.h"

int Company::total = 0;

/** 
* @brief TODO
* @param TODO
* @return TODO
*/
Company::Company(){
	/** TODO **/
	this->ID = total;
	total++;
}
Company::~Company(){
	/** TODO **/
	total--;
}
void Company::give_raise(float tax){
	for (std::vector<Employee*>::iterator it = this->employees.begin(); it != this->employees.end(); ++it)
	{
		(*it)->wage *= (tax +1); 
	}
}
/** Getters and Setters **/
int Company::getID(){
	return this->ID;
}
/** Operadores **/
std::istream &operator>> (std::istream &i, Company &c) {
	std::cout << "Digite o nome da empresa:" << std::endl;
	i.ignore(1); // Ignora exatamente o caracter '\n'
	std::getline (i, c.name);
	std::cout << "Digite o CNPJ da empresa:\n";
	i >> c.CNPJ;
	return i;
}