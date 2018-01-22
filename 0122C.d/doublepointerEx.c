#include <stdio.h>

void Swap (int *a, int *b);
int main(void){
	int x = 10, y = 20;
	int *pX , *pY;
	pX = &x;
	pY = &y;

	printf("First Value x = %d, y = %d\n", x, y);
	Swap(pX, pY);
	printf("Change Value out Function *pX = %d, *pY = %d\n", *pX, *pY);
	return 0;
}

void Swap(int *a, int *b){
	int *temp;
	temp = a;
	a = b;
	b = temp;
	printf("Changed in Function *a = %d, *b = %d\n", *a, *b);
}
