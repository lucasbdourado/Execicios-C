
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, j;
	
	for(i=1; i<=6; i++){
		for(j=1; j<=6; j++){
			if(i + j == 7){
				printf("\n Possibilidade: %i + %i = 7\n ", i, j);
			}
		}
	}
	return 0;
}
