#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // std(Standard ǥ��) io (input output) ���Ĵٵ�io�� ����

void main() //void �ǵ����� ���� ���� �޼ҵ� ���ϰ��� ������ �������� return�� �����
{
	/* 
	int result; // <- �޸� ��ƸԴ¾�Integer
	result = 100 - 50;
	printf("%d", result); 
	printf("%d", 100 - 50);
	printf("%d",
		100 - 50);
	*/

	/*
	int a, b;
	int result;
	a = 100; // = �� ���ʾ갡 �����ʰŸ� �����ϰڴ�.
	b = 0;
	*/

	// %d ������� (10����) %c ������� (Character) %s ������� (String) %f �Ҽ�(float) %lf �Ҽ�(double) 

	//homme Tests
	int a, b;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);
	// �����տ� &�� ���̸� �̴� �ش� ������ �ּ�

	result = a + b;
	printf("%d + %d = %d \n", a, b, a + b); // print "f" �����

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result);


}