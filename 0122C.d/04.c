#include <stdio.h>

int main(void){
	int arr[] ={1,2,3,4,5};
	int i;

	printf("�迭�� ��� ��� : ");
	for(int i = 0; i<5;i++){
		printf("%d ", arr[i]);
	}

	printf("\n\n");

	printf("�迭�� �ּ� ��� : ");
	for(i = 0; i < 5 ;i ++){
		printf("%d ", &arr[i]);
	}

	printf("�迭�� �̸� ��� : %d\n", arr);
	return 0;
}

