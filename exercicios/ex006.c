#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int k,n,i, divs = 0, primo = 0;
	
printf("Digite um numero inteiro:\n");
scanf("%i", &n);
if(n > 0 || n < 10){
	for(i=n;i<=10;i++){
			for(k=1; k<=i; k++){
				if(i%k == 0){
					divs = divs + 1;
				}
			}
		if(divs<=2){
			printf("Numero primo: %i\n", i);
			primo = primo +1;
		}
		divs = 0;
	}		
}else{
	printf("Digite um numero maior que 0 e menor que 10!\n");
}

	if(primo < 1){
			printf("Nao possuem numeros primos possiveis\n");
		}else{
			printf("O sistema ja encontrou todos os primos possiveis!\n");
		}
	
	return 0;
}
