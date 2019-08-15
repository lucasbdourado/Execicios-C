#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float ma,mg,mh;
	int a,b,c;
	
	printf("Digite 3 Valores inteiros: \n");
	scanf("%i %i %i", &a, &b, &c);
	
	if (a!=0 && b!=0 && c!=0){
		ma=(a+b+c)/3;
		mh=3.0/(1/a+1/b+1/c);
		mg= cbrt(a*b*c);
		
		printf("Media Aritimetica = %.2f \n", ma);
		printf("Media Geometrica = %.2f\n", mg);
		printf("Media Harmonica = %.2f\n", mh);
		
	}
	else{
		printf("Entre com valores diferentes de zero.\n");
	}	
		
		
		
	return 0;
}
