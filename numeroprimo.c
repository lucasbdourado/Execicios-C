#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,i, divs = 0;
	
	
	printf("Digite um numero inteiro:\n");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++){
		if(n%i == 0){
			printf("Divisor: %i\n", i);
			divs = divs + 1;
		}
	}
	
	if(divs > 2){
		printf("Este numero %i nao e primo!",n);
	}else{
		printf("Este numero e primo!");
	}
	return 0;
}
