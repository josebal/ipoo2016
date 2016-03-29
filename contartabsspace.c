#include <stdio.h>
/*2. Escribir un programa para contar espacios en blanco, tabs y saltos de linea.*/
int main() {
	int c, espacios, tabs, saltos;
	
	espacios = 0;
	tabs = 0;
	saltos = 0;
	
	printf("Contar 'Espacios, tabs, saltos de linea' \n");
	printf("Escribe algun texto. Usa EOF para ver el resultado: \n");
	printf("--------------------------- \n");
	while((c = getchar()) != EOF) {
		if(c=='\n'){
			++saltos;
		}
		if(c=='\t') {
			++tabs;
		}
		if(c == ' ') {
			++espacios;
		}
	}
	printf("\n\n----------------------\n");
	printf("Total espacios: %d \n", espacios);
	printf("Total tabs: %d \n", tabs);
	printf("Total saltos: %d \n", saltos);
	return 0;
}

