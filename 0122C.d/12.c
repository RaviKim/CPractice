#include <stdio.h>

void Swap(int *a , int *b);


int main(void){

	int x = 10, y = 20;
	printf("First Value x = %d, y = %d\n", x, y);
	Swap(&x, &y);
	printf("Out Function value x = %d, y = %d\n", x, y);
	return 0;
}

void Swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	printf("In Funcion changed Value is *a = %d, *b=%d\n", *a, *b);
}
