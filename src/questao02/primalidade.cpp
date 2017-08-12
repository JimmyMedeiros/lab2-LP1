#include "../../include/questao02/primalidade.h"
#include <cmath>

bool is_prime(int num){
	int max = sqrt(num);
	if (num%2 ==  0) return false;
	if (num > 2){
		/* TODO */
		for (int i = 3; i <= max; i += 2){
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

int largest_prime(int n){
	/* TODO */
	if (n < 2) return 0;
	while (not is_prime(n)){
		--n;
	}
	return n;
}