#include <stdio.h>
/* 7. Factorial de un numero */
int main() {
	
	int factorial, total, cont;
	
	printf("Calcular Factorial\n----------------------------\n");
	printf("Ingrese un numero: ");
	scanf("%d", &factorial);
	
	total = 1;
	cont = 1;
	
	while (cont <= factorial) { 
		total = total*cont;
		++cont;
	}
	printf("\n Factorial de %d! = %d",factorial, total);
	return 0;
}

