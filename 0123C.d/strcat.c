#include <stdio.h>
#include <string.h>


int main(void){
	char dest[15] = "I am";
	char src[] = " a student";

	strcat(dest, src);
	puts(dest);

	return 0;

}
