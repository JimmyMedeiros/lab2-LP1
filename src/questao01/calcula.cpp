#include <iostream>
#include "../../include/questao01/calcula.h"
#include "../../include/questao01/area.h"
#include "../../include/questao01/perimetro.h"
#include "../../include/questao01/volume.h"

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
void calcula_piramide(){
	unsigned int s;
	std::cout << "Digite o tamanho do lado da pirâmide: ";
	std::cin >> s;
	std::cout << "\nVolume da pirâmide: " << volume_of_pir(s);
	std::cout << "\nÁrea da pirâmide: " << area_of_sqr(s) + 4*area_of_tri(s) << "\n\n";
}
void calcula_cubo(){
	unsigned int s;
	std::cout << "Digite o tamanho do lado do cubo: ";
	std::cin >> s;
	std::cout << "\nVolume do cubo: " << volume_of_cube(s);
	std::cout << "\nÁrea do cubo: " << 6*area_of_sqr(s) << "\n\n";
}
void calcula_paralelepipedo(){
	unsigned int w;
	unsigned int l;
	unsigned int h;
	std::cout << "Digite o tamanho da largura do paralelepípedo: ";
	std::cin >> w;
	std::cout << "Digite o tamanho do comprimento do paralelepípedo: ";
	std::cin >> l;
	std::cout << "Digite o tamanho da altura do paralelepípedo: ";
	std::cin >> h;
	
	std::cout << "\nVolume do paralelepípedo: " << volume_of_paral(w,l,h);
	std::cout << "\nÁrea do paralelepípedo: " << 2*area_of_rect(w,l) + 2*area_of_rect(w,h) + 2*(area_of_rect(l, h)) << "\n\n";
}
void calcula_esfera(){
	unsigned int r;
	std::cout << "Digite o tamanho do raio da esfera: ";
	std::cin >> r;
	std::cout << "\nVolume da esfera: " << volume_of_sphere(r);
	std::cout << "\nÁrea da esfera: " << 4*area_of_circle(r) << "\n\n";
}