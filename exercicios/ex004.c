#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int k,n,i, divs = 0, perfeito = 0, soma = 0;
	
printf("Digite um numero inteiro:\n");
scanf("%i", &n);

for(i=n;i<=i*2;i++){
		printf("Numero: %i\n", i);
		for(k=1; k<i; k++){
			if(i%k == 0){
				divs = divs + 1;
				printf("Divisores: %i\n", k);
				soma = soma + k;
			}
		}
		printf("Soma dos divisores: %i\n", soma);
		
	if(soma == i){
		perfeito = perfeito + 1;
	}
	if(perfeito>= 4){
		printf("O sistema ja encontrou os quatros numeros perfeitos!");
		break;
	}
	divs = 0;
	soma = 0;
}


	
	return 0;
}
