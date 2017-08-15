#include <iostream>
#include <string>
#include "../../include/questao02/primalidade.h"
#include "../../include/questao02/fatorial.h"

int main(int argc, char const *argv[]){
	if (argc < 2){
		std::cerr << "Faltando argumento a ser passado pelo terminal.\n";
		return 1;
	}

	std::string argument = argv[1];

	for (size_t i = 0; i < argument.size(); ++i){
		if (argument[i] > '9' or argument[i] < '0'){
			std::cerr << "Argumento passado é inválido. A função deve receber um número inteiro positivo." << std::endl;
			return 1;
		}
	}
	unsigned int num = std::stoi(argument);
	if (num > 30){
		std::cerr << "Valor máximo como argumento: 30" << std::endl;
		return 2;
	}
	unsigned int fat;
	fat = fatorial(num);
	unsigned int prime = largest_prime(fat);

	std::cout << "Maior numero primo anterior ao fatorial de " << num << " (" << fat << ") eh " << prime << std::endl;
	
	return 0;
}