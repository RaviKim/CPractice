#include <stdio.h>



int main(void){
	char a = 'A';
	char *pA = &a;
	int b = 100;
	int *pB = &b;
	double c = 3.14;
	double *pC = &c;



	printf("pA�� ũ�� : %dbyte\n", sizeof(pA));
	printf("pB�� ũ�� : %dbyte\n", sizeof(pB));
	printf("pC�� ũ�� : %dbyte\n\n", sizeof(pC));
	printf("*pA�� ũ�� : %dbyte\n", sizeof(*pA));
	printf("*pB�� ũ�� : %dbyte\n", sizeof(*pB));
	printf("*pC�� ũ�� : %dbyte\n", sizeof(*pC));

	return 0;
}
