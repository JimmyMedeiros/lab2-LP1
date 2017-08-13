#include <cmath>
#include "../../include/questao01/area.h"

float area_of_tri (int base, int height){
	return (base * height / 2.0f);
}

int area_of_rect (int base, int height){
	return (base * height);
}

int area_of_sqr (int side){
	return pow(side, 2);
}