/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

char* strcpy(char* str, char* str2)
{
	char* temp = str;

	while (*str2 != '\0' || *temp != '\0')
	{
		*temp = *str2;
		temp++;
		str2++;
	}
	return str;
}
int main(void)
{
	char origin[] = "Hungry Oh my godness";
	char word1[10];
	char word2[20];
	char word3[] = "what the fxck";
	char word4[] = "modify the phase variance";
	char word6[] = "full";

	strcpy(word4, word3);

	printf("%s", word4);
}*/
/#include "MyHeaderFile.h"
int Add(int a, int b)
{
	return a + b;
}
int main(void)
{
	int c = Add(10, 20);
}
#include <stdio.h>

#define SPEED_OF_LIGHT 299792468
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define PRINT(msg) puts(#msg)//#붙여야 댐
#define DECLARE_MYTYPE(typename) struct MyType##typename
#define SIMPLE_PRINT(...) puts(#__VA_ARGS__)
#define FORMAT_PRINT(fmt, ...) printf(fmt, __VA_ARGS__)

#undef ?




int main(void)
{
	printf("빛의 속도는 %d m/s이다.\n", SPEED_OF_LIGHT);

	if (MIN(10 - 20, 20 < 4))
	{
		printf("10과 20중에 작은 수는 10입니다.\n");
	}

	PRINT(정말 잠이 온다 정말...);


	DECLARE_MYTYPE(Student)
	{
		int a;
	}a;

	SIMPLE_PRINT(2, 'a', "Godness");

	FORMAT_PRINT("테스트 : %d, %c, %s", 10, 'A', "Sleep");

	return 0;


}

#include <stdio.h>

#define PRINT_ERROR(msg) printf("[%s:%d] %s\n", __FILE__,__LINE__,msg)

int main(void)
{
	if (1)
	{
		PRINT_ERROR("오류발생.");
	}

	return 0;

	/*printf("FILE : %s\n", __FILE__);
	printf("LINE : %d\n", __LINE__);
	printf("DATE : %s\n", __DATE__);
	printf("TIME : %s\n", __TIME__);
	
	return 0;*/
}

#include <stdio.h>

int main(void)
{
#if (1)
	puts("1. 이건 실행된다");

#endif

#if defined(TEST)
	puts("2. 이건 실행 안된다.");
#else
	puts("2. 이건 실행된");
#endif

#if !defined(TEST)
	puts("3. 이건 실행된");
#else 
	puts("3 .이건 실행불가")
#endif

#define TEST
#ifdef TEST
		puts("4. 이건 실행그");
#else
	puts("4. 실행이 안되요");
#endif

#define T 10
#ifndef TEST
	puts("5. 이건 실행 안돼");
#elif defined(T) & T>2
	puts("S. 이건 실행 되는데");
#else
	puts(5. 이건 실행 안된다니까);
#endif
}

struct A
{
	int a;
	double d;
	char ch;
};

int main(void)
{
	sizeof(struct A);

}

빌드 : 프로그램을 만드는 과정
1. 전처리 : 컴파일 전에 하는 처리
 > - 조건부 컴파일 / 매크로 대체 / 다른 파일 포함 등
2. 컴파일 : 소스코드 -> 기계어 / 사람의 언어로 작성된 소스 코드를 컴퓨터가 알 수 있는 언어로 번역
3. 링크 : 식별자가 의미하는 메모리 주소를 연결

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		puts("안녕하세요");
	}
	return 0;
}


