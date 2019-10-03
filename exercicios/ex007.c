  
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){

	int res, n;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &n);

	if(n > 0){
		for(res = 1; n >= 1; n = n - 1){
			printf("\nFator: %i", n);
			res = res * n;
		}
	}
	
	printf("\nResultado: %i", res);
		
return 0;
}
