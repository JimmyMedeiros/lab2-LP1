#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[]){
	char opt = -1;

	while (opt != 0){
		std::cout << "Calculadora de Geometria Plana e Espacial\n"
		<< "(1) Triangulo equilatero\n"
		<< "(2) Retangulo\n"
		<< "(3) Quadrado\n"
		<< "(4) Circulo\n"
		<< "(5) Piramide com base quadrangular\n"
		<< "(6) Cubo\n"
		<< "(7) Paralelepípedo\n"
		<< "(8) Esfera\n"
		<< "(0) Sair\n"
		<< "Digite a sua opção:" << std::endl;
		std::cin >> opt;
		switch (opt){
			case 1:
				// TODO
				break;
			case 2:
				// TODO
				break;
			default:
				// TODO
				break;
		}
		if (not isdigit(opt) or (opt > '8')){
			std::cout << "\nOpção inválida. Por favor, digite uma opção válida\n\n";
		} 
		else {
			opt = atoi((const char*) &opt);
		}
	}

	return 0;
}