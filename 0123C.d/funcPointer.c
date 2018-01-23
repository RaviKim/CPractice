#include <stdio.h>

int Add(int a, int b);
int Min(int a, int b);


int main(void){
	int a, b, sel, result;
	int (*fPtr)(int a, int b);

	while(1){
		printf("Select One (1. ADD 2. Minus 3. EXit) : ");
		scanf("%d", &sel);

		switch(sel){
		
			case 1:
				fPtr = Add;
				break;

			case 2: 
				fPtr = Min;
				break;
			case 3: 
				return 0;
				
			default : 
				break;
		}
		printf(" Input Two Integer Number : ");
		scanf("%d%d ", &a, &b);
		result = fPtr(a, b);
		printf(" Result : %d\n", result);
	}
	return 0;
}

int Add(int a, int b){
	return a + b;	
}
int Min (int a, int b){
	return a - b;
}
