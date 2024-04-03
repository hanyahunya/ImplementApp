#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // String 문법 사용하기 위함
void main() {
	/*float a = 0.1234567890123456789012345f;
	double b = 0.1234567890123456789012345;

	printf("%30.25f\n", a);
	printf("%30.25lf\n", b);*/

	/*char a, b, c;
	a = 'A';
	printf("%c \n", a);
	printf("%d \n", a);

	b = 'a';
	c = b + 5;
	printf("%c \n", b);
	printf("%c \n", c);

	c = 85;
	printf("%c \n", c);*/



	/*int a, b;
	char c, d;

	a = 0x41;
	b = 0x50;

	printf("%c\n", b);

	c = a;
	printf("%c\n", c);

	d = '#';
	printf("%c의 ASCII코드값은 %d입니다\n", d, d);*/

	
	//char str1[10];
	//char str2[10];
	//char str3[10] = "CookBook";
	//char str4[10];

	//strcpy(str1, "Basic-C"); //strcpy(array, String) 은 뒤에있는 문자열을 앞에있는 배열에 복사한다
	//strcpy(str2, str3);

	//printf("str1 ==> %s \n", str1);
	//printf("str2 ==> %s \n", str2);
	//printf("str3 ==> %s \n", str3);

	//printf("str3 ==> %d번째 원소 %c \n", 0, str3[0]);
	//printf("str3 ==> %d번째 원소 %c \n", 1, str3[1]);
	//printf("str3 ==> %d번째 원소 %c \n", 2, str3[2]);
	//printf("str3 ==> %d번째 원소 %c \n", 3, str3[3]);
	//printf("str3 ==> %d번째 원소 %c \n", 4, str3[4]);
	//printf("str3 ==> %d번째 원소 %c \n", 5, str3[5]);
	//printf("str3 ==> %d번째 원소 %c \n", 6, str3[6]);
	//printf("str3 ==> %d번째 원소 %c \n", 7, str3[7]);
	//printf("str3 ==> %d번째 원소 %c \n", 8, str3[8]);
	//printf("str3 ==> %d번째 원소 %c \n", 9, str3[9]);

	//printf("str4 ==> %s\n", str4);

	/*char str[10] = "0123456789";

	printf("str ==> %s \n", str);

	str[0] = 'I';
	str[1] = 'T';
	str[2] = 'C';
	str[3] = 'o';
	str[4] = 'o';
	str[5] = 'k';
	str[6] = '\0';

	printf("str ==> %s \n", str);
	printf("str[7] ==> %c \n", str[7]);
	printf("str[50] ==> %c \n", str[50]); */

	
	
	/*int a;
	printf("%s ==> ", "정수를 입력하세요");
	scanf("%d", &a);

	printf("10진수 => %d \n", a);
	printf("16진수 => %x \n", a);
	printf("8진수 => %o \n", a);*/

	// -----------------------------------------
	int jinsu;
	int num;
	printf("입력진수 결정 <10> 10진수 <2> 16진수 <3> 8진수 :");
	scanf("%d", &jinsu);
	
	if (jinsu == 1) {
		printf("값 입력 ==> ");
		scanf("%d", &num);
	}if (jinsu == 2) {
		printf("값 입력 ==> ");
		scanf("%x", &num);
	}if (jinsu == 3) {
		printf("값 입력 ==> ");
		scanf("%o", &num);		
	}
	printf("10진수 ==> %d\n", num);
	printf("16진수 ==> %x\n", num);
	printf("8진수 ==> %o\n", num);

	/*switch (jinsu) {
	case 1 :
		printf("값 입력 ==> ");
		scanf("%d", &num);
		break;
	case 2 :
		printf("값 입력 ==> ");
		scanf("%x", &num);
		break;
	case 3 :
		printf("값 입력 ==> ");
		scanf("%o", &num);
		break;
	default :
		printf("이게뭐누");
		break;
	}
	printf("10진수 ==> %d\n", num);
	printf("16진수 ==> %x\n", num);
	printf("8진수 ==> %o\n", num); */
	// -----------------------------------------

	/* printf("int 형의 크기 \t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int 형의 크기 \t\t\t ==> %d\n", sizeof(unsigned int));
	printf("short 형의 크기 \t\t\t ==> %d\n", sizeof(short));
	printf("unsigned short 형의 크기 \t\t\t ==> %d\n", sizeof(unsigned short));
	printf("long int 형의 크기 \t\t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int 형의 크기 \t\t\t ==> %d\n", sizeof(unsigned long int));
	printf("float 형의 크기 \t\t\t ==> %d\n", sizeof(float));
	printf("double 형의 크기 \t\t\t ==> %d\n", sizeof(double));
	printf("long double 형의 크기 \t\t\t ==> %d\n", sizeof(long double));
	printf("char 형의 크기 \t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char 형의 크기 \t\t\t ==> %d\n", sizeof(unsigned char)); */

}
