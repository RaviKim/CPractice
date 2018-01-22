#include <stdio.h>


int main(void){
	int b = 100;
	int *pB = &b;

	printf("b = %d\n", b);
	printf("&b = %x\n", &b);
	printf("*pB = %d\n", *pB);
	printf("pB = %x\n", pB);
	return 0;
}



