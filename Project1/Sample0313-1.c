#include <stdio.h> // std(Standard ǥ��) io (input output) ���Ĵٵ�io�� ����

void main() //void �ǵ����� ���� ���� �޼ҵ� ���ϰ��� ������ �������� return�� �����
{
	/* 
	int result; // <- �޸� ��ƸԴ¾�Integer
	result = 100 - 50;
	printf("%d", result); // %d ������� (10����) %c ������� (Character) %s ������� (String)
	printf("%d", 100 - 50);
	printf("%d",
		100 - 50);
	*/

	int a, b;
	int result;
	a = 100;
	b = 50;

	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result);
}