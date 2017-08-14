/**
 * @file perimetro.cpp
 */

#include "../../include/questao01/perimetro.h"

#define PI 3.14159265

/** 
* @brief Função que calcula o perímetro de um triângulo equilátero.
* @param side Um valor inteiro positico, o tamanho do lado do triângulo.
* @return Um valor inteiro positivo com o perímetro do triângulo.
*/
unsigned int perimeter_of_tri (unsigned int side){
	return (3*side);
}
unsigned int perimeter_of_rect (unsigned int base, unsigned int height){
	return (2*base + 2*height);
}
unsigned int perimeter_of_sqr (unsigned int side){
	return (4*side);
}
float perimeter_of_circle (unsigned int radius){
	return (PI*radius*radius);
}