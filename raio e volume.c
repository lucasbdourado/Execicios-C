#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float R, V;
	
	printf("DIgite o valor do raio:\n");
	scanf("%f", &R);
	
	if(R>0){
		V = 4/3 *PI * pow(R,3);
		printf("Volume: %f", V);
	}
	else{
		printf("O raio deve ser maior que 0");
	}
	
	
	return 0;
}
