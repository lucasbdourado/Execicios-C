#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n, i;
	for(;;){
	
		printf("Digite um numero inteiro:\n");
		scanf("%i", &n);
		if(n<=0){
			break;
		}
		printf("Numero: %i\n", n);
		
		for(i=1;i<=n; i++){
			if(n%i == 0){
				printf("Divisor: %i\n", i);
			}
		}
	}
	return 0;
}
