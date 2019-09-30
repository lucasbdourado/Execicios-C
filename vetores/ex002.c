#include <stdio.h>
#include <stdlib.h>
#define T 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, menor, pmenor, aux;
	
	int v[T] = {2,6,8,3,10,9,1,21,33,14};
	menor = v[0];
	pmenor = 0;
	for(i = 0; i<T; i++){
		if(menor > v[i]){
			menor = v[i];
			pmenor = i;
		}
	}
	printf("Menor elemento %i na pos [%i]\n", menor, pmenor);
	aux = v[0];
	v[pmenor] = aux;
	v[0] = menor;
	for(i = 0; i<T; i++){
		printf("%i	", v[i]);
	}

	return 0;
}
