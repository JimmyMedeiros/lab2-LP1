#include "../../include/questao01/volume.h>"
#include <cmath>

float volume_of_pir(unsigned int side){
	float apothem = (side * (sqrt(3)/2.0f));
	float height = sqrt(pwo(apothem, 2) - pow((s/2.0f), 2));
	return (pow(side, 2) * height)/3.0f;
}
