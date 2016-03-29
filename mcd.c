#include <stdio.h> 

int mcd (int a, int b); 

int main() 
{ 
	int a,b,c,d;
	
	printf("Ingrese cuatro numeros \n\n");
	
	printf("1er número: ");
	scanf("%d", &a);
	
	printf("2do número: ");
	scanf("%d", &b);
	
	printf("3er número: ");
	scanf("%d", &c);
	
	printf("4to número: ");
	scanf("%d", &d);
	
	int f=mcd(a,b);
	int g=mcd(f,c);
	printf ("El MCD es :%d\n", mcd ( g , d)); 
	
	return 0; 
} 

int mcd (int a, int b) 
{ 
	if ((a % b) == 0) 
		return b; 
	else 
		return mcd (b, a % b); 
}
