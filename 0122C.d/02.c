#include <stdio.h>

int main(void) {
	char str[] = "Programming";
	char *ptr1;

	ptr1 = &str[0];

	printf("%x\n", ptr1);
	printf("%x\n", ptr1 + 1);
	printf("%c\n", *(ptr1 + 1));
	printf("%x\n", ptr1 + 3);
	printf("%c\n", *(ptr1 + 3));
	return 0;

}
