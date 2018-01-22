#include <stdio.h>


int main(void){
	int a;
	int *p;
	int **pp;

	a = 100;
	p = &a;
	pp = &p;

	printf("a's address value &a is : %x\n", &a);
	printf("p's Value is : %x\n", p);	
	printf("*p's Value is : %d\n\n", *p);	

	printf("pp's Value is : %x\n", pp);	
	printf("*pp's Value is : %x\n", *pp);	
	printf("**pp's Value is : %d\n", **pp);	

}
