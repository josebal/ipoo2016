#include <stdio.h>
/*3-. Leer por teclado un conjunto de numeros enteros no nulos, terminando en CERO, e imprimir sus cuadrados.*/
int main() {
	int num, cuadrado;
	printf("Ingresar un numero: ");
	scanf("%d", &num);
	
	while(num!=0){
		cuadrado=num*num;
		printf("El cuadrado de %d es: %d \n\n", num, cuadrado);
		printf("Ingresar un numero: ");
		scanf("%d",&num);
	}
	printf("FIN \n");
	printf("-------------------");
	
}
