#include <stdio.h>
#define SRT_SERCURE_NO_WARNING

void main() {
	
	printf("100 + 100\n"); // 100 + 100
	printf("%d\n", 100 + 100); //200

	printf("%d\n", 100, 200); // 100만 출력됨
	
	printf("%d %d\n", 100); // 100, (아무수) 출력됨

	printf("%d / %d = %d\n\n", 100, 200, 0.5); //실수를 정수로 표현할때는 소수를 버림 (반올림x)

	// %d - Demical (10진법) %x <- heXa(16진법) %o <-Octal (8진법)  포토샵 색상코드 16진법 ffffff

	// %d - Demical (10
	// %f - Float
	// %lf - LongFloat (Double)
	// %c Character
	// %s String

	printf("%d\n\n", 'a'); // ASCII코드값으로 나오네용
	
	printf("%d / %d = %f\n", 100, 200, 0.5);
	printf("%c %c \n", 'a', 'K');
	printf("%s %s \n----------자리지정----------\n\n", "안녕", "c언어");

	//------------------------------자리지정------------------------------
	
	printf("%d\n", 123); // 123
	printf("%5d\n", 123); // 5글자로 표시 xx123 (오른쪽에 맞춤)(우측부터 채움)
	printf("%05d\n\n", 123); // 5글자로 표시 빈부분은 0으로 표현 00123

	printf("%f\n", 123.45); // Float는 소수점 6번째 까지 무조건 표현 123.450000
	printf("%7.1f\n", 123.45); // 총 7자리로 표현하고 .1(소수점 뒤 1자리까지만 표현 그뒤는 반올림)
	printf("%7.3f\n\n", 123.45); // 소수점아래 3번째까지 표현하고 빈칸은 0으로 채움

	printf("%s\n", "Basic-c");
	printf("%10s\n----------EscapeCharacter----------\n\n", "Basic-c");

	//----------------------------EscapeCharacter------------------------------

	// \n (Enter) \t (Tab) \b (BackSpace) \r (줄의 맨앞으로 감 Home) \\ (\출력) \' ('출력) \" ("출력) 

	printf("\n줄 바꿈\n 연습 \n");
	printf("\t탭키 \t연습 \n");
	printf("이것을\r덮어씁니다\n");
	printf("\a\a\a비프음3번 \n");
	printf("글자가 \"강조\"되는 효과\n");
	printf("\\\\\\역슬래시 3개출력 \n----------연습----------\n\n");

	//--------------------연습-----------------------

	//1
	float temperature = 26.5;
	printf("현재온도: %.1f도\n--------------------\n", temperature);

	//2
	float radius = 5.5, area;
	area = 3.14 * radius * radius;
	printf("원의넓이: %.2f\n--------------------\n", area);

	//3
	float num = 3.14;
	printf("부동 소수점: %f\n--------------------\n", num);

	//4
	int hours = 8, miniutes = 45;
	int num1 = 12345; // 5자리로 정렬된 정수출력
	int num2 = -9876; // 8자리로 정렬된 정수 출력

	printf("시간: %d시 %d분\n", hours, miniutes);
	printf("%5d\n", num1);
	printf("%8df\n---------------------\n", num2);

	//5
	int age = 25;
	printf("나이: %d세\n---------------------\n", age);

	//6
	float temperature1 = 26.5;
	float num_1 = 1234.56789;
	printf("현재온도: %.1f도\n", temperature1);
	printf("%10.2ff\n-------------------\n", num_1);

	//7
	char symbol = '$';
	char ch = 'A';
	printf("%-8c\n", ch); // -붙이면 좌측정렬 ( 보통 char에서만 씀)
	printf("기호: %c\n--------------------\n", symbol);

	//8
	char department[] = "Computer Science"; // String이 없음 - char배열로 string 표현
	printf("학과: %s\n", department);

	char message[50] = "Welcome to C programming";
	printf("메시지: %s\n--------------------\n", message);

	//9
	char city[] = "New York";
	char str[] = "Hello";
	printf("%10s\n", str);
	printf("%s\n--------------------\n", city);

	//10
	char greeting[] = "Hello World";
	char str1[] = "World";
	printf("%-10s\n", str1);
	printf("인사말: %s\n----------변수----------\n\n", greeting);

	//--------------------------------변수의 이해--------------------------------

	//- 변수선언 규칙 영문자 숫자 언더바로 이루어짐
	//- 중간에 공백 들어갈수 없음
	//- 첫글자는 반드시 영문자 또는 언더바여야합니다 (_는 상수라던지 특별한 경우에만)
	//- 숫자로 시작할수 없음
	//- UpperCase, LowerCase 구분해주기
	//- if for while등 사용하지말기

	// 변수 선언시 값을 넣어주는걸 초기값이라 함. (초기화)

	/*
	int a;
	int b;
	a = 100;
	b = 200;
	==
	int a = 100, b = 200;
	*/
	
	//---------------------연습-------------------
	int a, b;
	float c, d;

	//1
	a = 100;
	b = a;
	c = 111.1f;
	d = c;
	printf("a, b의 값 ==> %d, %d \n", a, b);
	printf("c, d의 값 ==> %5.1f, %5.1f \n--------------------\n", c, d);

	int a1, b1, c1, d1;

	a1 = 100 + 100;
	b1 = a1 + 100;
	c1 = a1 + b1 - 100;
	d1 = a1 + b1 + c1;
	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d\n", a1, b1, c1, d1);
	
	a1 = b1 = c1 = d1 = 100; // 이러면 abcd에 다 100들어감
	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d\n", a1, b1, c1, d1);

	a1 = 100;
	a1 += 200;
	printf("a의 값 ==> %d \n", a1);
}