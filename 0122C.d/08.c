#include <stdio.h>


int main(void){
	char str[] = "love";
	char *pStr = "you";

	printf("Output str : %s\n", str);
	printf("Output pStr : %s\n", pStr);

	str[0] = 'r';
	pStr[0] = 'T';

	printf("Output str : %s\n", str);
	printf("OutPut pStr : %s\n", pStr);

	return 0;
}
