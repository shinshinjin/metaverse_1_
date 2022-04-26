#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int A;
//	int B;
//
//	scanf("%d %d", &A, &B);
//
//	printf("%0.9f", (double)A/B);
//
//	return 0;
//
//}
//
// float, double, long double
// 소수점 밑의 자리가 9개까지 같아야 함.
// float : 6개
// double : 9개
// long double : 15개
//
// 오류의 종류
// Compile Error : 문법을 잘못 쓴 것
// Link Error : 연결을 잘못한 것
//	- 함수를 선언만하고 정의하지 않았을 때
//	- 이미 정읟괸 식별자를 다시 재정의 했을 때
//	- 범위 밖의 식별자를 사용했을 때
//	- Runtime Error : 프로그램 실행 중에 오류 발생
//	- 버그 => 논리 오류
// 오류창 : 보기 -> 오류목록
//
// 10 bit
// 10L;
// (singed char)1024;
// 
// char => 1 Byte => 8 bit
// 0010 0000 0000
// (long)10; => 명시적 변환
//
//
//
//#include <stdio.h>
//int main(void)
//{
//	int A, B;
//
//	scanf("%d %d", &A, &B);
//
//	printf("%d\n", A + B);
//	printf("%d\n", A - B);
//	printf("%d\n", A * B);
//	printf("%d\n",  A / B);
//	printf("%d", A % B);
//
//
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	char name[50];
//
//	scanf("%s", &name);
//
//	printf("%s?\?!", name );
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int year;
//
//	scanf("%d", &year);
//
//	printf("%d", year - 543);
//
//	return 0;
//
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int A, B, C;
//
//	scanf("%d %d %d", &A, &B, &C);
//
//	printf("%d\n", (A + B) % C);
//	printf("%d\n", ((A % C) + (B % C)) % C);
//	printf("%d\n", (A * B) % C);
//	printf("%d", ((A % C) * (B % C)) % C);
//
//	return 0;
//}
//
//#include <stdio.h>	
//
//int main(void)
//{
//	int A, B;
//
//	scanf("%d %d", &A, &B);
//
//	int C = A * (B % 10);
//	int D = A * (B / 10 % 10 );
//	int E = A * (B / 100 % 10);
//
//	printf("%d\n", C);
//	printf("%d\n", D);
//	printf("%d\n", E);
//	printf("%d\n", A * B);
//
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int TestScore;
//
//	scanf("%d", &TestScore);
//
//	if (TestScore>=90)
//	{
//		printf("A\n");
//	}
//	else if (TestScore>=80)
//	{
//		printf("B\n");
//	}
//	else if (TestScore>=70)
//	{
//		printf("C\n");
//	}
//	else if (TestScore>=60)
//	{
//		printf("D\n");
//	}
//	else
//	{
//		printf("F\n");
//	}
//
//
//	return 0;
//
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int yearNum;
//
//	scanf("%d", &yearNum);
//
//	if ((yearNum % 100 != 0)&&(yearNum % 4 ==0))
//
//	{
//		printf("1");
//	}
//
//	else if (yearNum % 400 == 0)
//	{
//		printf("1");
//	}
//
//	else
//	{
//		printf("0");
//	}
//	
//	return 0;
//
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int x, y;
//
//	scanf("%d %d", &x ,&y);
//
//	if ((x > 0) && (y > 0))
//	{
//		printf("1");
//	}
//	else if ((x < 0) && (y > 0))
//	{
//		printf("2");
//	}
//	else if ((x < 0) && (y < 0))
//	{
//		printf("3");
//	}
//	else if ((x > 0) && (y < 0))
//	{
//		printf("4");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int timeH;
//	int	timeM;
//
//	scanf("%d %d", &timeH, &timeM);
//
//	if ((timeH <= 23) && (timeM <= 59))
//	{
//		if ((timeM < 45)&&(timeH !=0))
//		{
//			printf("%d %d", timeH - 1, timeM + 15);
//		}
//		else if ((timeH == 0)&&(timeM < 45))
//		{
//			printf("%d %d", timeH + 23, timeM + 15);
//		}
//		else
//		{
//			printf("%d %d", timeH, timeM - 45);
//		}
//	}
//
//	return 0;
//}

#include <stdio.h>

int main()
{

	int HourTime;
	int MinTime;
	int AddTime;

	scanf("%d %d %d", &HourTime, &MinTime, &AddTime); //각각 시간, 분, 추가분을 입력한다.

	HourTime += AddTime / 60; //시간에 추가분을 60으로 나누고, 그 값을 더해준다.

	MinTime += AddTime % 60; //분에 추가분의 나머지를 더해준다.

	if(MinTime >= 60) //분이 60보다 같거나 클 때
	{

		HourTime++; //시간을 더해준다.
		 
		MinTime %= 60; // 분은 60을 나머지로 계산 한다.

	}

	if(HourTime >= 24) //시간이 24보다 같거나 클 때

		HourTime %= 24; //시간을 24의 나머지로 계산 한다.

	printf("%d %d", HourTime, MinTime); // 시간과 분을 출력한다.

	return 0;

}



/*
#1. 기본개념

- 식별자(identifier) : 여러 요소를 구분짓는 이름.최대한 구체적으로 적는다.
	> -숫자로 시작할 수 없다.
	> -대소문자를 구분한다.
	> -키워드를 사용할 수 없다.
	> -범위(Scope)(식별자가 유효한 공간), 이름 공간(NameSpace)(식별자에 대해서 카테고리를 지정하는 것),
	연결(linkage)(서로다른 범위나 번역 단위에 있을 때 동일한 객체를 참조하게 만드는 것)

	- 선언(Declaration) : 프로그램에게 식별자가 어떤 의미인지, 어떤 속성을 갖는지 알려주는 것
	> -정의(Definition) : 식별자에 대한 모든 정보를 제공하는 선언

	- 구문(Statement) : 컴퓨터에게 명령하는 것.세미클론으로 구문을 구분한다.
	> -복합구문(Compound Statement) : 블록(Block)
	> -식 구문(Expression Statement) : 계산을 할 수 있는 구문으로 연산자와 피연산자의 시퀀스(Sequence).평가(Evaluation)
	> -분기문(Selection Statement) : 식의 결과에 따라서 선택지를 제공하는 구문 . if / switch
	> -반복문(Iteration Statement) : 어떤 구문을 반복하는 구문. for / while / do while
	> -점프문(Jump Statement) : 조건에 관계없이 어떤 곳으로 이동하는 구문. break / continue / goto

	- 주석(Comment) : 사용자에게 정보를 제공하는 것. 코드의 의미(코드를 이렇게 작성한 이유)를 설명할 때 사용한다. 

2# 객체

- 객체(Object) : 메모리, 데이터를 조작하는 영역
	> - 크기(Size) : 데이터를 저장하기 위한 바이트 수 
	> - 정렬 요건(Alignment Requirement) : 데이터를 저장하기 위해 필요한 연속적인 바이트 수
	> - 기억 존속 시간(Storage Duration) : 데이터가 얼마나 오래 사용할 수 있는지. (데이터 유효성)
	> - 값(Value) : 데이터
	> - 수명(Lifetime) : 객체가 살아있는 시간. 기억 존속시간이랑 같음
	> - 타입(Type) : 데이터를 해석하는 방법
	> - 식별자(Identifier) : 객체를 구분짓는 이름

- 타입
	> - Integer : int, signed char, short, long, long long
	> - Floating-point : float, double, long double
	> - Character : char
	> - Conversion : 데이터를 다른 타입으로 해석하는 것.
		> - Implicit / Explicit(Casting)

- 변수(Variable) : 여러 데이터를 저장할 수 있는 객체 
- 상수(Constant) : 데이터가 변하지 않는 객체. const type 수식자

#3. 분기문
- 분기문 : 프로그램에게 여러 흐름을 제공하는 구문 
- if / switch 
*/
//
//