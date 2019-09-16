#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	float S, fracao;
	i=1;
	while(i<=10){
		fracao=(float)i/(float)pow((float)i,2);
		printf("%f\n", fracao);
		i=i+1;
		if(i%2==0){
			fracao=(-1)*fracao;
		}
		S=S+fracao;
	}
	
	return 0;
}
