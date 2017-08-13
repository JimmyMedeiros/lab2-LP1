#include <iostream>
#include "../../include/questao01/calcula.h"
#include "../../include/questao01/area.h"
#include "../../include/questao01/perimetro.h"

void calcula_triangulo(){
	unsigned int s;
	std::cout << "Digite o tamanho da lado do triângulo: ";
	std::cin >> s;
	std::cout << "\nÁrea do triângulo: " << area_of_tri(s);
	std::cout << "\nPerímetro do triângulo: " << perimeter_of_tri(s) << "\n\n";
}
void calcula_retangulo(){
	unsigned int b;
	unsigned int h;
	std::cout << "Digite o tamanho da base do retângulo: ";
	std::cin >> b;
	std::cout << "Digite o tamanho da altura do retângulo: ";
	std::cin >> h;
	std::cout << "\nÁrea do retângulo: " << area_of_rect(b,h);
	std::cout << "\nPerímetro do retângulo: " << perimeter_of_rect(b,h) << "\n\n";
}
void calcula_quadrado(){
	unsigned int s;
	std::cout << "Digite o tamanho do lado do quadrado: ";
	std::cin >> s;
	std::cout << "\nÁrea do quadrado: " << area_of_sqr(s);
	std::cout << "\nPerímetro do quadrado: " << perimeter_of_sqr(s) << "\n\n";
}
void calcula_circulo(){
	unsigned int r;
	std::cout << "Digite o tamanho do raio do círculo: ";
	std::cin >> r;
	std::cout << "\nÁrea do círculo: " << area_of_circle(r);
	std::cout << "\nPerímetro do círculo: " << perimeter_of_circle(r) << "\n\n";
}
/*void calcula_piramide(){
	unsigned int s;
	std::cout << "Digite o tamanho do lado da pirâmide: ";
	std::cin >> s;
	std::cout << "\nVolume da pirâmide: " << volume_of_pir(s);
	std::cout << "\nÁrea da pirâmide: " << area_of_sqr(s) + area_of_tri(s);
}
void calcula_cubo();
void calcula_paralelepipedo();
void calcula_esfera();
*/