#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{

	int a, b, c, d;
	int calculationMethod;
	int result;

	
		printf("ù��° ����� ���� �Է��ϼ��� ==> ");
		scanf("%d", &a);
		printf("�ι�° ����� ���� �Է��ϼ��� ==> "); // %d �� ����ǥ�� 
		scanf("%d", &b);
		printf("����° ����� ���� �Է��ϼ��� ==> ");
		scanf("%d", &c);
		printf("�׹�° ����� ���� �Է��ϼ��� ==> ");
		scanf("%d", &d);
	  
		printf("������� �������ּ���\n(1-���ϱ�, 2-����, 3-���ϱ�, 4-������\n=>");
		scanf("%d", &calculationMethod);

		switch(calculationMethod){
			case 1 : 
				printf("�����=> %d\n", sum(a, b, c, d));
				break;
			case 2 :
				printf("�����=> %d\n", min(a, b, c, d));
				break;

		};

	

		

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

}
	int sum(a, b, c, d) {
		 int result = a + b + c + d;
		// printf("%d + %d + %d + %d = %d \n", a, b, c, d, result); //printf "" �ȿ� %������ �׳� ���
		return result;
		}
	int min(a, b, c, d) {
		int result = a - b - c - d;
		// printf("%d + %d + %d + %d = %d \n", a, b, c, d, result); //printf "" �ȿ� %������ �׳� ���
		return result;
	}