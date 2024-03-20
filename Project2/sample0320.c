#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{

	int a, b, c, d;
	int calculationMethod;
	int result;

	
		printf("첫번째 계산할 값을 입력하세요 ==> ");
		scanf("%d", &a);
		printf("두번째 계산할 값을 입력하세요 ==> "); // %d 는 정수표현 
		scanf("%d", &b);
		printf("세번째 계산할 값을 입력하세요 ==> ");
		scanf("%d", &c);
		printf("네번째 계산할 값을 입력하세요 ==> ");
		scanf("%d", &d);
	  
		printf("계산방식을 선택해주세요\n(1-더하기, 2-빼기, 3-곱하기, 4-나누기\n=>");
		scanf("%d", &calculationMethod);

		switch(calculationMethod){
			case 1 : 
				printf("결과값=> %d\n", sum(a, b, c, d));
				break;
			case 2 :
				printf("결과값=> %d\n", min(a, b, c, d));
				break;

		};

	

		

	/*int a, b;
	int result;
	int k;

	printf("첫번쨰 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("<1>덧셈 <2>뺄셈 <3>곱셈<4>나눗셈 ==> ");
	scanf("%d", &k);
	printf("두번쨰 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);

	if (k == 1) {
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
	}if (k == 2) {
		result = a - b;
		printf("%d - %d = %d\n", a, b, result);
	}if (k == 3) {
		result = a * b;
		printf("%d * %d = %d\n", a, b, result);
	}if (k == 4) {
		if (b != 0) {
			result = a / b;
			printf("%d / %d = %d\n", a, b, result);
		} else {
			printf("0으로 나누면 안됩니다.\n");
		}
	}*/

	
	
	/*if (a > b) {
		printf("%d 가 %d보다 큽니다\n", a ,b);
	} else if (a < b) {
		printf("%d가 %d보다 작습니다\n", a, b);
	} else {
		printf("%d와 %d 가 같습니다\n", a, b);
	} */

}
	int sum(a, b, c, d) {
		 int result = a + b + c + d;
		// printf("%d + %d + %d + %d = %d \n", a, b, c, d, result); //printf "" 안에 %없으면 그냥 출력
		return result;
		}
	int min(a, b, c, d) {
		int result = a - b - c - d;
		// printf("%d + %d + %d + %d = %d \n", a, b, c, d, result); //printf "" 안에 %없으면 그냥 출력
		return result;
	}