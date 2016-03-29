#include <stdio.h>
/*10. Dado un numero natural n, determinar el numero Harmonico Hn definido por:*/
void armonico(int n){
	float suma, divisor;
	
	suma = 0;
	for(int i=1;i<=n;i++){
		divisor= (float)1/i;
		
		suma+=divisor;
	}
	printf("El armonico es: %f", suma);
	
}
int main() {
	int num;
	printf("Ingrese un numero: ");
	armonico(num=getchar());
	return 0;
}
