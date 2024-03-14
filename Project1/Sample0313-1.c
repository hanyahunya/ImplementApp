#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // std(Standard 표준) io (input output) 스탠다드io라 읽음

void main() //void 되돌려줄 값이 없는 메소드 리턴값이 있으면 마지막에 return값 줘야함
{
	/* 
	int result; // <- 메모리 잡아먹는얘Integer
	result = 100 - 50;
	printf("%d", result); 
	printf("%d", 100 - 50);
	printf("%d",
		100 - 50);
	*/

	/*
	int a, b;
	int result;
	a = 100; // = 는 왼쪽얘가 오른쪽거를 참조하겠다.
	b = 0;
	*/

	// %d 정수출력 (10진법) %c 문자출력 (Character) %s 문자출력 (String) %f 소수(float) %lf 소수(double) 

	//homme Tests
	int a, b;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);
	// 변수앞에 &를 붙이면 이는 해당 변수의 주소

	result = a + b;
	printf("%d + %d = %d \n", a, b, a + b); // print "f" 모니터

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result);


}