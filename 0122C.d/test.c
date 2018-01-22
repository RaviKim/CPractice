#include <stdio.h>

int main(void){
	int arr[] ={1,2,3,4,5};
	int i;

	printf("OutPut : ");
	for(int i = 0; i<5;i++){
		printf("%d ", arr[i]);
	}

	printf("\n\n");

	printf("OutPut Array : ");
	for(i = 0; i < 5 ;i ++){
		printf("%d ", &arr[i]);
	}

	printf("OutPut array name : %d\n", arr);
	return 0;
}

