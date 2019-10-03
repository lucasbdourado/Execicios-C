#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int k,m, res, soma;
	
printf("Digite um numero inteiro:\n");
scanf("%i", &m);

if(m%2 == 0){
	for(k=1; k<=m; k++){
			if(m%k == 0){
				printf("Divisor: %i\n", k);
			}
	}
}else if(m%2 != 0 && m < 10 && m > 0){
	for(res = 1; m > 1; m = m - 1){
			res = res * m;
	}
	printf("\nResultado: %i", res);
}else if(m%2 != 0 && m >= 10){
	for(soma = 1; m > 1; m--){
			soma = soma + m;
	}
	printf("\nResultado: %i", soma);
}

return 0;
}
