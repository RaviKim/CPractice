#include <stdio.h>


int main(void){
	char str1[10]= "Beautiful";
	//	str1 = "Beautiful";
	// 선언과 동시에 초기화.
	//
	char str2 [10];
	str2 = "Beautiful"

		// 이건 선언과 동시에 초기화가 되지 않았음.
		// 우선 str2는 이렇게 치게 되면 시스템상으로 쓰레기값으로라도 초기화는 진행되어짐.
		// stack 메모리 10 바이트를 할당하게 됨.
		// 
		// 또한 str2 = "Beautiful"도 잘못되어짐.
		// 배열의 이름은 주소를 나타내는 포인터임.
		// 배열의 이름은 포인터지만 상수포인터이다.
		// 상수 값이라는 것은 대입을 받을 수 있는 수가 아님.
		// 즉 상수라는 것은 좌변에 있을 수가 없음.ex, 5=6;이건 틀림.
		//
		// 그러면 이러한 str1이라는 배열에 문자열을 집어 넣고 싶은데 어떻게 해야할까? 
}
