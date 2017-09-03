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
	total++;
}
Company::~Company(){
	/** TODO **/
	total--;
}
std::istream &operator>> (std::istream &i, Company &c) {
	std::cout << "Digite o CNPJ da empresa:\n";
	i >> c.CNPJ;
	std::cout << "Digite o nome da empresa:\n";
	i >> c.name;
	return i;
}