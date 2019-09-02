#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float a,b,c,x1,x2;
	
	printf("Digite os valores das raizes:\n");
	scanf("%f %f %f", &a, &b, &c);
	if(a!=0 && b!=0){
	
		if(pow(b,2) - 4*a*c){
		
			x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
			
			x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
			
			printf("Raizes: %f e %f", x1,x2);
		}
		else{
			printf("Essa equacao nao possui raizes!");
		}
	}
	else{
		printf("Os valores de A e B devem ser diferentes de 0!");
	}
	return 0;
}
