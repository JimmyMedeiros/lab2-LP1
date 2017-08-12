#include "../../include/questao02/fatorial.h"

unsigned int fatorial (unsigned int n){
	if (n < 2)
	{
		return 1;
	}
	else {
		return n * fatorial(n-1);
	}
}