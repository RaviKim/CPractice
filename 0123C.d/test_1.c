#include <stdio.h>
#include <string.h>

int main(void){
	int ret1, ret2, ret3;

	char s1[] = "ABC";
	char s2[] = "ABC";
	char s3[] = "ABB";
	char s4[] = "ABD";

	ret1 = strcmp(s1,s2);
	ret2 = strcmp(s1,s3);
	ret3 = strcmp(s1,s4);


	printf("ret1's result is : %d\n", ret1);
	printf("ret2's result is : %d\n", ret2);
	printf("ret3's result is : %d\n", ret3);

	return 0;

}
