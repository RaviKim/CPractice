#include <stdio.h>



int main(void){
	int arr[] = {1,2,3,4,5};

	int *pTemp;
	int i;

	pTemp = arr;

	printf("Using array name array Out Put : ");
	for(i = 0; i <5 ; i++){
		printf("%d ", pTemp[i]);
	}

	printf("\n\n");

	return 0;
}
