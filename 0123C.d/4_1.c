#include <stdio.h>

int main (void){
	void *a;
	double b = 3.14;

	a = &b; // 일단 이러한 형태가 성립은 가능하다.
			// 하지만 void 타입과 int타입은 다르다.
			// a 는 void형 포인터. b는 다름
	printf("%f\n",*(double *)a);// printf("%d\n", a) 는 문제가 없음. 주소값 자체를 출력하는 것은 문제가 없음
	// 하지만 *a를 사용하면 주소값의 크기를 알 수가 없음.
	return 0;
}

