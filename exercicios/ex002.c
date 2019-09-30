#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int h=0, m=0;
	
	for(;;){
		printf("%i:%i\n", h,m);
		m += 15;
		if (m>45){
			m = 0;
			h++;
		}
		if (h>23){
			m = 0;
			h = 0;
			break;
		}
	}
	
	return 0;
}
