#include <stdio.h>
/* 6. Leer por teclado un numero entero positivo n, calcular x(elevado a la n) */
int main() {
	int base, elevado_a, veces, total;
	
	printf("(Exponente) Ingrese un numero: ");
	scanf("%d", &elevado_a);

	printf("(Base) Ingrese un numero: ");
	scanf("%d", &base);
	
	veces = 0;
	total = 1;
	
	while(veces < elevado_a ) {
		total = total * base;
		++veces;
	}
	printf("\n\n Resultado: %d elevado a la %d = %d", base, elevado_a, total);
	return 0;
}

