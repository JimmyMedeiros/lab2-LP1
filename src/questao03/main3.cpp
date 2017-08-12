#include <iostream>

int funcX (int a, int b){
	++a;
	b++;
	int result = a + b;
	return result; // retorna o valor 36
}
int funcY (int* a, int b){
	int* y = new int;
	(*y) = (*a);
	(*y) *= 5;
	int result = (*y) + b;
	return result; // retorna o valor 78
}
void funcZ (int a, int b, int* result){
	a++;
	(*result) += a + 2*b;
}
int main(int argc, char* argv[]){
	int arg1 = 11;
	int arg2 = 23;
	funcX ( arg1, arg2); // A função não altera arg1 nem arg2
	funcY ( &arg1, arg2); // A função não altera arg1 nem arg2
	int resultado = 0;
	funcZ (arg1,arg2,&resultado); // a função altera: resultado = 58
	return 0;
}
