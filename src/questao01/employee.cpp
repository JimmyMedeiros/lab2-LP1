/**
 * @file employee.cpp
 */
#include <string>

#include "../../include/questao01/employee.h"

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