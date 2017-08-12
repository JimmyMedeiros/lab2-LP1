#include <iostream>
#include <string>
#include "../../include/questao02/primalidade.h"
#include "../../include/questao02/fatorial.h"

int main(int argc, char const *argv[]){
	std::string argument = argv[1];
	for (size_t i = 0; i < argument.size(); ++i){
		if (argument[i] > '9' or argument[i] < '0'){
			std::cerr << "Argumento passado é inválido. A função deve receber um número inteiro positivo." << std::endl;
			return 1;
		}
	}
	unsigned int num = std::stoi(argument);
	if (num > 13){
		std::cerr << "Valor máximo como argumento: 13" << std::endl;
		return 2;
	}
	num = fatorial(num);
	unsigned int prime = largest_prime(num);

	std::cout << prime << std::endl;
	
	return 0;
}