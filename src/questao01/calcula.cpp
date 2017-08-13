#include <iostream>
#include "../../include/questao01/calcula.h"
#include "../../include/questao01/area.h"


void calcula_triangulo(){
	unsigned int b;
	unsigned int h;
	std::cout << "Digite o tamanho da base do triângulo: ";
	std::cin >> b;
	std::cout << "Digite o tamanho da altura do triângulo: ";
	std::cin >> h;
	unsigned int p = b * 3;
	std::cout << "\nÁrea do triângulo: " << area_of_tri(b,h);
	std::cout << "\nPerímetro do triângulo: " << p << "\n\n";
}
void calcula_retangulo(){
	unsigned int b;
	unsigned int h;
	std::cout << "Digite o tamanho da base do retângulo: ";
	std::cin >> b;
	std::cout << "Digite o tamanho da altura do retângulo: ";
	std::cin >> h;
	unsigned int p = 2*b + 2*h;
	std::cout << "\nÁrea do retângulo: " << area_of_rect(b,h);
	std::cout << "\nPerímetro do retângulo: " << p << "\n\n";
}
void calcula_quadrado(){
	unsigned int s;
	std::cout << "Digite o tamanho do lado do quadrado: ";
	std::cin >> s;
	unsigned int p = s * 4;
	std::cout << "\nÁrea do quadrado: " << area_of_sqr(s);
	std::cout << "\nPerímetro do quadrado: " << p << "\n\n";
}
