#include <stdio.h>

void func(int *pArr);

int main(void){
	int arr[]= {1,2,3,4,5};
	int i;

	func(arr);
	for(i = 0; i < 5; i++){
		printf("Array 요소 출력 : %d\n", arr[i]);
	}
	return 0;
}


void func(int *pArr){
	int i;
	for(i = 0; i < 5; i++){
		printf("Functional array : %d\n", *(pArr+i));
	}
}
