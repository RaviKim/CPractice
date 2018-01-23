# include <stdio.h>



int main(){
	char str[100];
	int i = 10;
	double d = 3.14;

	sprintf(str, "%d", i);
	printf(" change integer to string : %s\n", str);
	
	sprintf(str, "%.2f", d);
	printf(" change real number to string :  %s\n", str);


	return 0;
}
