#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A,B;
	float media;
	
	printf("Escreva dois numeros inteiros:\n");
	scanf("%i %i", &A, &B);
	
	if(A!= 0 && B!=0){
		media = (A+B)/2.0;
		
		printf("Media: %f", media);
	}
	else{
		printf("Digite dois numeros diferentes de 0\n");
	}
	
	return 0;
}
