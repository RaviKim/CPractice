#include <stdio.h>

int func(int *pArr, int size);

int main(void){
	int arr[]= {1,2,3,4,5};
	int i;
	int sumArr, sizeArr;

	sizeArr = sizeof(arr)/sizeof(int);
	sumArr = func(arr,sizeArr);
	printf("All Sum result is : %d\n", sumArr);
	return 0;
}


int func(int *pArr, int size){
	int i, sum=0;
	for(i = 1; i < size; i++){
		sum+= *(pArr + i);
	}

	return sum;
}
