#include <stdio.h>
#include <stdlib.h>
#define T 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, menor, pmenor, aux, auxm;
	
	int v[T] = {2,6,8,3,10,9,1,21,33,14};
	menor = v[0];
	
	for(menor=0; menor>T; menor++){
	auxm = v[menor];
	pmenor = menor;
	
	for(i = 0; i<T; i++){
		if(auxm > v[i]){
			auxm = v[i];
			auxm = i;
		}
	}
	printf("Menor elemento %i na pos [%i]\n", auxm, pmenor);
	aux = v[0];
	v[pmenor] = aux;
	v[0] = menor;
	for(i = 0; i<T; i++){
		printf("%i\t", v[i]);
	}
}

	return 0;
}
