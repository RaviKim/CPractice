#include <stdio.h>


int main(void){
	char *pArr[] = {"CLanguage", "Java", "Basic"};
	int i;

	for(i = 0; i< 3; i++){
		printf("%s\n", pArr[i]);
	}
	return 0;
}
