#include <stdio.h>



int main(void){
	char a = 'A';
	char *pA = &a;
	int b = 100;
	int *pB = &b;
	double c = 3.14;
	double *pC = &c;



	printf("pA의 크기 : %dbyte\n", sizeof(pA));
	printf("pB의 크기 : %dbyte\n", sizeof(pB));
	printf("pC의 크기 : %dbyte\n\n", sizeof(pC));
	printf("*pA의 크기 : %dbyte\n", sizeof(*pA));
	printf("*pB의 크기 : %dbyte\n", sizeof(*pB));
	printf("*pC의 크기 : %dbyte\n", sizeof(*pC));

	return 0;
}
