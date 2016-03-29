#include <stdio.h>
/* 5. Leer por teclado un numero entero positivo n, imprimir la suma de los numero primos enteros positivos menores que n.  */
int main() { 
	int numero, divisor, suma, dato;
	suma = 0;
	
	printf("Suma de los numeros primos \n --------------------------\n\n");
	printf("Ingrese un numero: ");
	scanf("%d", &dato);
	for (numero=2; numero<dato; numero++) 
	{ 
		for (divisor=2; numero%divisor!=0; divisor++); 
		if (divisor == numero) 
		{ 
			suma=suma+numero; 
		} 
	} 
	printf("\nLa suma de los numeros primos es: %d\n",suma);
	return 0;
}
