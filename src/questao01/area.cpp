/**
 * @file area.cpp
 */

#include <cmath>
#include "../../include/questao01/area.h"

#define PI 3.14159265

/**
* @brief Função que calcula a área de um triângulo equilátero
* @param side Um valor inteiro positivo, o tamanho do lado do triângulo
* @return Um valor float com a área do triângulo
*/
float area_of_tri (unsigned int side){
	float height = (side * (sqrt(3)/2.0f));
	return (side * height / 2.0f);
}
/**
* @brief Função que calcula a área de um retângulo
* @param base Um valor inteiro positivo, o tamanho da base do retângulo
* @param height Um valor inteiro positivo, a altura do retângulo
* @return Um valor inteiro positivo, a área do retângulo
*/
unsigned int area_of_rect (unsigned int base, unsigned int height){
	return (base * height);
}
/**
* @brief Função que calcula a área de um retângulo
* @param side Um valor inteiro positivo, o tamanho do lado  do quadrado
* @return Um valor inteiro positivo, a área do quadrado
*/
unsigned int area_of_sqr (unsigned int side){
	return pow(side, 2);
}
/**
* @brief Função que calcula a área de um retângulo
* @param radius Um valor inteiro positivo, o tamanho do raio  do círculo
* @return Um valor inteiro positivo, a área do quadrado
*/
float area_of_circle (unsigned int radius){
	return PI * pow(radius, 2);
}