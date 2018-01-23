#include <stdio.h>


int main(void){
	char str[10];

	fputs("Gets String : ", stdout);

	gets(str);
	puts(str);

	fputs("fgets STring : ", stdout);
	fgets(str, sizeof(str), stdin);
	puts(str);
	return 0;
}
