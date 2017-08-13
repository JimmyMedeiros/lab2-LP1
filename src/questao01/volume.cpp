#include "../../include/questao01/volume.h"
#include <cmath>
#define PI 3.14159265

float volume_of_pir(unsigned int side){
	float apothem = (side * (sqrt(3)/2.0f));
	float height = sqrt(pow(apothem, 2) - pow((side/2.0f), 2));
	return (pow(side, 2) * height)/3.0f;
}
unsigned int volume_of_cube(unsigned int side){
	return pow(side, 3);
}
unsigned int volume_of_paral(unsigned int width, unsigned int length, unsigned int height){
	return width * length * height;
}
float volume_of_sphere(unsigned int radius){
	return ((4*PI)/3.0f);
}