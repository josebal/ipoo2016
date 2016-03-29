#include <stdio.h>
/* 4. Leer por teclado un numero entero positivo n, calcular la suma de los n primeros numeros enteros positivos. */
int main() {
	
	int numero, total, cont;
	
	printf("Calcular de los primeros numeros\n----------------------------\n");
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	total = 0;
	cont = 0;
	
	while (cont <= numero) { 
		total = total+cont;
		++cont;
	}
	printf("\n La suma de los %d primeros numeros positivos = %d",numero, total);
	return 0;
}

