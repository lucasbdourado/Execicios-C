#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int k,n,i, divs = 0, primo = 0;
	
printf("Digite um numero inteiro:\n");
scanf("%i", &n);

for(i=n;i<=i*2;i++){
		for(k=1; k<=i; k++){
			if(i%k == 0){
				divs = divs + 1;
			}
		}
	if(divs<=2){
		printf("Numero: %i\n", i);
		primo = primo +1;
	}
	if(primo>= 3){
		printf("O sistema ja encontrou os tres numeros primos!");
		break;
	}
	divs = 0;
}


	
	return 0;
}
