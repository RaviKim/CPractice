#include <stdio.h>

union unTemp{
	char a;
	int b;
	double c;
}un;

int main(void){
	printf("a 's address and size is : %x, %d\n", &un.a, sizeof(un.a));
	printf("b 's address and size is : %x, %d\n", &un.b, sizeof(un.b));
	printf("C 's address and size is : %x. %d\n", &un.c, sizeof(un.c));


	un.a = 'A';
	printf("a 's value is : %c\n", un.a);
	un.b = 100;
	printf("b 's value is : %d\n", un.b);
	un.c = 3.14;
	printf("c s value is : %f\n",un.c);
	printf("a : %c\n", un.a);

	return 0;

}
