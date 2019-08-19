#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i;
	float a,b,c,menor, maior, medio;
	
	printf("Escreva um numeros inteiro:\n");
	scanf("%i", &i);
	
	if(i>3){
		
		printf("O numero inteiro deve ser menor que 4\n");
		
	}
	else{
		
		printf("Escreva tres numeros reais:\n");
		scanf("%f %f %f", &a, &b, &c);
		
		if(a!=b && b!=c && c!=a){
			
		}
		
	}
	
	return 0;
}
