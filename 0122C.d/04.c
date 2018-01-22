#include <stdio.h>

int main(void){
	int arr[] ={1,2,3,4,5};
	int i;

	printf("배열의 요소 출력 : ");
	for(int i = 0; i<5;i++){
		printf("%d ", arr[i]);
	}

	printf("\n\n");

	printf("배열의 주소 출력 : ");
	for(i = 0; i < 5 ;i ++){
		printf("%d ", &arr[i]);
	}

	printf("배열의 이름 출력 : %d\n", arr);
	return 0;
}

