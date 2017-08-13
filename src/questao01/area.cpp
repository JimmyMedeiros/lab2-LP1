#include <cmath>
#include "../../include/questao01/area.h"

#define PI 3.14159265

float area_of_tri (int side){
	float height = (side * (sqrt(3)/2.0f));
	return (side * height / 2.0f);
}

int area_of_rect (int base, int height){
	return (base * height);
}

int area_of_sqr (int side){
	return pow(side, 2);
}

float area_of_circle (int radius){
	return PI * pow(radius, 2);
}