#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float ma,mg,mh;
	int a,b,c;
	
	printf("Digite 3 Valores inteiros: \n");
	scanf("%i %i %i", &a, &b, &c);
	if(a>0 && b>0 && c>0){	
		if (a<b+c && b<c+a && c<b+a){
		}
		else{
			printf("Esses valores nao formam um triangulo.\n");
		
		}
	}
	else{
		printf("Digite Valores maiores que zero.\n");
	}
		
		
		
	return 0;
}
