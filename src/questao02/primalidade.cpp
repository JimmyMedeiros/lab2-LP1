#include "../../include/questao02/primalidade.h"
#include <cmath>

bool is_prime(unsigned int num){
	unsigned int max = sqrt(num);
	if (num%2 ==  0) return false;
	if (num > 2){
		/* TODO */
		for (unsigned int i = 3; i <= max; i += 2){
			if (num%i == 0){
				return false;
			}
		}
	} 
	else {
		return false;
	}
	return true;
}

unsigned int largest_prime(unsigned int n){
	/* TODO */
	if (n < 2) return 0;
	if (is_prime(n)){
		return n;
	}
	else {
		return largest_prime(n-1);
	}
	return n;
}