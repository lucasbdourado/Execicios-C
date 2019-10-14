#include <stdio.h>
#include <stdlib.h>
#define T 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i , menor, pmenor;
	int v[T];
	for(i=0; i<T; i++){
		scanf("%i", &v[i]);
	}
	
	for(i=0; i<T; i++){
		printf("%i	", v[i]);
	}
	
	menor = v[0];
    pmenor =0;
    
    for (i =0 ; i < T ; i++ ){
		if ( menor > v[i]){
			menor =  v[i];
			pmenor = i;
		}	
    }
    
    printf("\nMenor elemento %i na pos [%i]",menor ,pmenor);
	
	return 0;
}
