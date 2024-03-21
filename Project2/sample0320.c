#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{

	int a, b;
	int calculationMethod;
	int i;
	
	do {
		a = scan_a();
	} while (getchar() != '\n');
	do {
		b = scan_b();
	} while (getchar() != '\n');
	
	/*printf("세번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);
	printf("네번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &d);*/
	
	do {
		i = 0;
		calculationMethod = scanner();
		i = switchcase(calculationMethod,a ,b);
		if (i == NULL) {
			break;
		}
		calculationMethod = 0;
	} while (getchar() != '\n' || i != 1);


} //main END

int scan_a() {
	int a;
	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	return a;
	}
int scan_b() {
	int b;
	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);
	return b;
	}

	int sum(a, b) {
		 int result = a + b;
		// printf("%d + %d + %d + %d = %d \n", a, b, c, d, result); //printf "" 안에 %없으면 그냥 출력
		return result;
	}
	int min(a, b) {
		int result = a - b;
		return result;
	}
	int times(a, b) {
		int result = a * b;
		return result;
	}
	int div(a, b) {
		int result;
		if (b != 0) {
			result = a / b;
		}
		else {
			printf("0으로 나눌수 없습니다\n");
			main();
			return NULL;
		}
		return result;
	}
	
	int scanner() {
		int calculation;
		printf("계산방식을 선택해주세요\n1-더하기, 2-빼기, 3-곱하기, 4-나누기\n=>");
		scanf("%d", &calculation);
		return calculation;
	}
	
	int switchcase (calculationMethod,a ,b) {
		switch (calculationMethod) {
		case 1:
			printf("결과값=> %d\n", sum(a, b));
			return 1;
		case 2:
			printf("결과값=> %d\n", min(a, b));
			return 1;
		case 3:
			printf("결과값=> %d\n", times(a, b));
			return 1;
		case 4:
			if (div(a, b) != NULL) {
				printf("결과값=> %d\n\n", div(a, b));
			}
			else {
				return NULL;
			}
			return 1;
		default:
			printf("\n올바른 값을 입력해주세요\n");
			return 0;
		};
	}

	
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
