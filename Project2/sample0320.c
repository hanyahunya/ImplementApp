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
	
	/*printf("����° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &c);
	printf("�׹�° ����� ���� �Է��ϼ��� ==> ");
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
	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	return a;
	}
int scan_b() {
	int b;
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);
	return b;
	}

	int sum(a, b) {
		 int result = a + b;
		// printf("%d + %d + %d + %d = %d \n", a, b, c, d, result); //printf "" �ȿ� %������ �׳� ���
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
			printf("0���� ������ �����ϴ�\n");
			main();
			return NULL;
		}
		return result;
	}
	
	int scanner() {
		int calculation;
		printf("������� �������ּ���\n1-���ϱ�, 2-����, 3-���ϱ�, 4-������\n=>");
		scanf("%d", &calculation);
		return calculation;
	}
	
	int switchcase (calculationMethod,a ,b) {
		switch (calculationMethod) {
		case 1:
			printf("�����=> %d\n", sum(a, b));
			return 1;
		case 2:
			printf("�����=> %d\n", min(a, b));
			return 1;
		case 3:
			printf("�����=> %d\n", times(a, b));
			return 1;
		case 4:
			if (div(a, b) != NULL) {
				printf("�����=> %d\n\n", div(a, b));
			}
			else {
				return NULL;
			}
			return 1;
		default:
			printf("\n�ùٸ� ���� �Է����ּ���\n");
			return 0;
		};
	}

	
	/*int a, b;
	int result;
	int k;

	printf("ù���� ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	printf("<1>���� <2>���� <3>����<4>������ ==> ");
	scanf("%d", &k);
	printf("�ι��� ����� ���� �Է��ϼ��� ==> ");
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
			printf("0���� ������ �ȵ˴ϴ�.\n");
		}
	}*/



	/*if (a > b) {
		printf("%d �� %d���� Ů�ϴ�\n", a ,b);
	} else if (a < b) {
		printf("%d�� %d���� �۽��ϴ�\n", a, b);
	} else {
		printf("%d�� %d �� �����ϴ�\n", a, b);
	} */
