#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){
	char ch;
	fputs("Correct 'Y' or 'y' and Wrong 'n' or 'N' Input : ", stdout);
	scanf("%c", &ch);

	switch(tolower(ch)){
		case 'y' :
			puts("Permission OK.");
			break;
		case 'n':
			puts("Canceld.");
			break;

	}
	return 0;

}
