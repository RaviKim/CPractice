#include <stdio.h>



int main(void){
	char a = 'A';
	char *pA = &a;
	int b = 100;
	int *pB = &b;
	double c = 3.14;
	double *pC = &c;


	printf("%d\n",*pA +1 );
	printf("%d\n",*pB +1 );
	printf("%d\n",*pC +1 );
	
	return 0;
}
