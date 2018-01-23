#include <stdio.h>
#include <string.h>

int main(void){
	char str[] = "Love";
	char *p;

	p = strchr(str, 'v');

	if ( p != NULL){
		*p = 'b';
		printf(" Change Result : %s\n", str);
	}
	else{
		printf(" Null return !");
	}
	return 0;
}
