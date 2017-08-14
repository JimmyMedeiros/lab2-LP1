/**
 * @file volume.cpp
 */
#include "../../include/questao01/volume.h"
#include <cmath>
#define PI 3.14159265

/**
* @brief Função que calcula o volume de uma pirâmide
* @param side Um valor inteiro positivo, o tamanho do lado da base da pirâmide
* @details Essa função leva em consideração que a pirâmide é composta de triângulos equiláteros
* @return Um valor float com o volume da pirâmide
*/
float volume_of_pir(unsigned int side){
	float apothem = (side * (sqrt(3)/2.0f));
	float height = sqrt(pow(apothem, 2) - pow((side/2.0f), 2));
	return (pow(side, 2) * height)/3.0f;
}
/**
* @brief Função que calcula o volume de um cubo
* @param side Um valor inteiro positivo, o tamanho do lado do cubo
* @return Um valor inteiro positivo com o volume do cubo
*/
unsigned int volume_of_cube(unsigned int side){
	return pow(side, 3);
}
/**
* @brief Função que calcula o volume de um paralelepípedo
* @param width Um valor inteiro positivo, a largura do paralelepípedo
* @param length Um valor inteiro positivo, o comprimento do paralelepípedo
* @param height Um valor inteiro positivo, a altura do paralelepípedo
* @return Um valor inteiro positivo com o volume do paralelepípedo
*/
unsigned int volume_of_paral(unsigned int width, unsigned int length, unsigned int height){
	return width * length * height;
}
/** 
* @brief Função que calcula o volume de uma esfera
* @param radius Um valor inteiro positivo, o raio da esfera
* @return Um valor float com o volume da esfera
*/
float volume_of_sphere(unsigned int radius){
	return ((4*PI)/3.0f);
}