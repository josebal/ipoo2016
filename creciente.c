#include <stdio.h>
/* 8. Leer por teclado tres numeroe naturales, imprimirlos en orden cresciente. */
int main() {
	int num1, num2, num3, aux;
	printf("Introduzca tres numeros: \n");
	printf("1er número: ");
	scanf("%d", &num1);
	
	printf("2do número: ");
	scanf("%d", &num2);
	
	printf("3er número: ");
	scanf("%d", &num3);
	
	if (num1 > num2) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	if (num1 > num3) {
		aux = num1;
		num1 = num3;
		num3 = aux;
	}
	if (num2 > num3) {
		aux = num2;
		num2 = num3;
		num3 = aux;
	}
	printf("Gracias %d %d %d", num1, num2, num3);
	return 0;
}
