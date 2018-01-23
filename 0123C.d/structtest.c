#include <stdio.h>
#include <string.h>


struct student{
	char name[10];
	int age;
	int height;
}st1;

int main(void){
	strcpy(st1.name, "ravikim");
	st1.age = 30;
	st1.height = 175;

	printf("Name = %s, Age = %d, Height = %d\n", st1.name, st1.age, st1.height);
	return 0;
}
