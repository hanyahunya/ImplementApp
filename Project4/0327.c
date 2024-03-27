#include <stdio.h>
#define SRT_SERCURE_NO_WARNING

void main() {
	
	printf("100 + 100\n"); // 100 + 100
	printf("%d\n", 100 + 100); //200

	printf("%d\n", 100, 200); // 100�� ��µ�
	
	printf("%d %d\n", 100); // 100, (�ƹ���) ��µ�

	printf("%d / %d = %d\n\n", 100, 200, 0.5); //�Ǽ��� ������ ǥ���Ҷ��� �Ҽ��� ���� (�ݿø�x)

	// %d - Demical (10����) %x <- heXa(16����) %o <-Octal (8����)  ���伥 �����ڵ� 16���� ffffff

	// %d - Demical (10
	// %f - Float
	// %lf - LongFloat (Double)
	// %c Character
	// %s String

	printf("%d\n\n", 'a'); // ASCII�ڵ尪���� �����׿�
	
	printf("%d / %d = %f\n", 100, 200, 0.5);
	printf("%c %c \n", 'a', 'K');
	printf("%s %s \n----------�ڸ�����----------\n\n", "�ȳ�", "c���");

	//------------------------------�ڸ�����------------------------------
	
	printf("%d\n", 123); // 123
	printf("%5d\n", 123); // 5���ڷ� ǥ�� xx123 (�����ʿ� ����)(�������� ä��)
	printf("%05d\n\n", 123); // 5���ڷ� ǥ�� ��κ��� 0���� ǥ�� 00123

	printf("%f\n", 123.45); // Float�� �Ҽ��� 6��° ���� ������ ǥ�� 123.450000
	printf("%7.1f\n", 123.45); // �� 7�ڸ��� ǥ���ϰ� .1(�Ҽ��� �� 1�ڸ������� ǥ�� �׵ڴ� �ݿø�)
	printf("%7.3f\n\n", 123.45); // �Ҽ����Ʒ� 3��°���� ǥ���ϰ� ��ĭ�� 0���� ä��

	printf("%s\n", "Basic-c");
	printf("%10s\n----------EscapeCharacter----------\n\n", "Basic-c");

	//----------------------------EscapeCharacter------------------------------

	// \n (Enter) \t (Tab) \b (BackSpace) \r (���� �Ǿ����� �� Home) \\ (\���) \' ('���) \" ("���) 

	printf("\n�� �ٲ�\n ���� \n");
	printf("\t��Ű \t���� \n");
	printf("�̰���\r����ϴ�\n");
	printf("\a\a\a������3�� \n");
	printf("���ڰ� \"����\"�Ǵ� ȿ��\n");
	printf("\\\\\\�������� 3����� \n----------����----------\n\n");

	//--------------------����-----------------------

	//1
	float temperature = 26.5;
	printf("����µ�: %.1f��\n--------------------\n", temperature);

	//2
	float radius = 5.5, area;
	area = 3.14 * radius * radius;
	printf("���ǳ���: %.2f\n--------------------\n", area);

	//3
	float num = 3.14;
	printf("�ε� �Ҽ���: %f\n--------------------\n", num);

	//4
	int hours = 8, miniutes = 45;
	int num1 = 12345; // 5�ڸ��� ���ĵ� �������
	int num2 = -9876; // 8�ڸ��� ���ĵ� ���� ���

	printf("�ð�: %d�� %d��\n", hours, miniutes);
	printf("%5d\n", num1);
	printf("%8df\n---------------------\n", num2);

	//5
	int age = 25;
	printf("����: %d��\n---------------------\n", age);

	//6
	float temperature1 = 26.5;
	float num_1 = 1234.56789;
	printf("����µ�: %.1f��\n", temperature1);
	printf("%10.2ff\n-------------------\n", num_1);

	//7
	char symbol = '$';
	char ch = 'A';
	printf("%-8c\n", ch); // -���̸� �������� ( ���� char������ ��)
	printf("��ȣ: %c\n--------------------\n", symbol);

	//8
	char department[] = "Computer Science"; // String�� ���� - char�迭�� string ǥ��
	printf("�а�: %s\n", department);

	char message[50] = "Welcome to C programming";
	printf("�޽���: %s\n--------------------\n", message);

	//9
	char city[] = "New York";
	char str[] = "Hello";
	printf("%10s\n", str);
	printf("%s\n--------------------\n", city);

	//10
	char greeting[] = "Hello World";
	char str1[] = "World";
	printf("%-10s\n", str1);
	printf("�λ縻: %s\n----------����----------\n\n", greeting);

	//--------------------------------������ ����--------------------------------

	//- �������� ��Ģ ������ ���� ����ٷ� �̷����
	//- �߰��� ���� ���� ����
	//- ù���ڴ� �ݵ�� ������ �Ǵ� ����ٿ����մϴ� (_�� �������� Ư���� ��쿡��)
	//- ���ڷ� �����Ҽ� ����
	//- UpperCase, LowerCase �������ֱ�
	//- if for while�� �����������

	// ���� ����� ���� �־��ִ°� �ʱⰪ�̶� ��. (�ʱ�ȭ)

	/*
	int a;
	int b;
	a = 100;
	b = 200;
	==
	int a = 100, b = 200;
	*/
	
	//---------------------����-------------------
	int a, b;
	float c, d;

	//1
	a = 100;
	b = a;
	c = 111.1f;
	d = c;
	printf("a, b�� �� ==> %d, %d \n", a, b);
	printf("c, d�� �� ==> %5.1f, %5.1f \n--------------------\n", c, d);

	int a1, b1, c1, d1;

	a1 = 100 + 100;
	b1 = a1 + 100;
	c1 = a1 + b1 - 100;
	d1 = a1 + b1 + c1;
	printf("a, b, c, d �� �� ==> %d, %d, %d, %d\n", a1, b1, c1, d1);
	
	a1 = b1 = c1 = d1 = 100; // �̷��� abcd�� �� 100��
	printf("a, b, c, d �� �� ==> %d, %d, %d, %d\n", a1, b1, c1, d1);

	a1 = 100;
	a1 += 200;
	printf("a�� �� ==> %d \n", a1);
}