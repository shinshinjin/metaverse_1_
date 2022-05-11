#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

//char* strrchr(char* str1, char target) //strrchr : 문자열을 뒤에서 찾는 것.
//{
//	char* firstchr = str1; // 첫글자를 저장한다.
//
//	//if (*str1 == target) // 첫글자가 찾는 글자일때를 했는데 없어도 된다.
//	//{						// 첫글자부터 반환을 해줘야 되는지 알았는데, 뒤에서 부터 찾는함수이므로 없어도 된다.
//	//	return str1; //str1 반환
//	//} 
//
//	while (*str1 != '\0') //str1이 NULL 값이 아닐경우
//	{
//		str1++; //str1 증감 -> str1 값의 끝까지 감.
//	}
//
//	if (*str1 == target) //마지막글자가 찾는 글자일 때,
//	{
//		return str1; //str1 값을 반환한다.
//	}
//
//	while (str1 != firstchr) // 위의 조건을 만족하지 않을 때 마지막부터 처음까지 반복
//	{
//		if (*str1 == target) //찾는 글자일 경우
//		{
//			return str1; //str1 값을 반환한다.
//		}
//		str1--; //아닐 경우 str1 값을 1칸만큼 앞으로 옮긴다.
//	}
//
//	return NULL; //찾는글자가 없다면 NULL값을 반환한다.
//}
//
//int main()
//{
//	char string[100] = "i love kimchi bro";
//	char* target = 'i';
//
//	char* returnSave = strrchr(string, target);
//	printf("%s", returnSave);
//}


/*
//문자열 맨 끝까지 간 후
int len = 0;
while (*str1 != '\0')
{
	++str1;
	++len;
}
--str1;

//찾아가면 됨
for (int i = len - 1; i >= 0; ++i)
{
	if (*str1 == targetchr)
	{
		return str1;
	}
	--str1;
}
return NULL;
*/



// myprintf(3, 1, 2, 3) -> My Variadic Function : 1, 2, 3
// "My Variadic Function : ~ " 
//void/*(반환타입)*/myprintf(int count/*int타입의 값을 하나 받는다).*/, .../*(가변인자)*/)
//{
//	va_list args;
//	va_start(args, count);
//
//	printf("My Varidic Function :");
//	for (int i = 0; i < count; ++i)
//	{
//		int number = va_arg(args, int); //가변 인자로부터 int 타입의 데이터를 하나씩 가져온다. 
//		printf(" %d,", number);
//	}
//	va_end(args);
//}
//
//int main(void)
//{
//	myprintf(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
//}
// <summary>
// printf와 유사하게 동작하나 기능이 제한됨.
// %d / %c / %f / %s
// </summary>
// <param name= "format">형식 문자열</param>
// <param name=">가변 인자값<param>

/*
void myprintf(const int		);

int main(void)
{
	my printf("Hello My Printf : %d %c %f %s", 10, 'A', 3.14f, "Hello");
	// Output : Hello My Printf : 10 , A, 3.14000, Hello
	
	return 0;
}
*/

//void simple_printf(char* format, ...)
//{
//	va_list args;
//	va_start(args, format);
//	char *word;
//
//	for (int i = 0; *format != '%'; ++i)
//	{
//		putchar(*format );
//		format++;
//
//	}
//
//	while (*format != '\0')
//	{
//		if (*format == 'd')
//		{
//			int i = va_arg(args, int);
//			printf("10 ");
//		}
//		else if (*format == 'c')
//		{
//			int c = va_arg(args, int);
//			putchar((char)c);
//		}
//		else if (*format == 's')
//		{
//			for (word = va_arg(args, char*); *word; word++)
//				putchar(*word);
//		}
//		++format;
//	}	
//	va_end(args);
//}
//
//
//
//int main(void)
//{
//	simple_printf("Hello My Printf : %d, %c, %s",10,'A'," Hello");
//	return 0;
//}

주소연산


// 1. Type : 데이터를 해석하는 방법
// 2. Memory : 데이터를 저장하는 공간
// 3. Object : 데이터를 저장하는 영역 -> Memory

//int main()
//{
//    int a;
//    a = 10; // 왜 이게 되는 것일까?
//
//    // 연산자는 피연산자를 동반한다.
//    // a + b
//    // a = b : 할당 연산자는 피연산자가 2개 필요하다.
//    // 피연산자에 조건. => 타입.
//    // 모든 연산자는 피연산자의 조건(타입)이 있다.
//
//    int* p;
//    p = &a;
//
//    int arr[5];
//    arr[2];
//    *(arr + 2);
//    (arr + 2); // 배열 + 정수 => 포인터 + 정수 => 주소 연산
//                // int* + int;
//                // int*
//    //*(int*) => int
//
//    // a[b] == *(a + b);
//    // 1. 왜 a + b는 주소 연산일까? => 피연산자의 타입 때문에 주소 연산이란 걸 알게 됨. => a의 타입은 pointer고, b의 타입은 int
//    // 2. *연산자는 오직 pointer 타입에만 적용할 수 있음. => (a + b)의 타입은 pointer
//    // 3. 역참조한 값의 타입은? pointer가 가리키고 있는 타입.
//
//    (p + 2); //
//    *(arr + 2); // arr(value) + sizeof(type) * int
//                // &arr[0] + sizeof(int) * 2;
//                //
//
//    int arr2[2][3];
//    *(*(arr2 + 2) + 3);
//    arr2 + 2; // arr2 : int(*)[3];
//            // 주소 연산
//            // &arr2[0] + sizeof(int[3]) * 2;
//            // 첫 번째 원소로부터 24바이트 뒤에 있는 것을 참조.
//            // arr2 + 2 : int(*)[3];
//    *(arr2 + 2); // int[3]
//    *(int*);
//    int;
//    arr[2][3];
//
//    enum { A, B, C } a = -1;
//}
//
//
//printf

//void myprintf(int count, ...)
//{
//    // char* == va_list
//    // char의 크기는? 1바이트
//    // byte*
//  va_list args; // 가변 인자를 다룰 객체를 만든다.
//  va_start(args, count); // 가변 인자의 시작 위치를 알려준다.
//
//  printf("My Variadic Function :");
//  for (int i = 0; i < count; ++i)
//  {
//      int number = va_arg(args, int); // 인자를 빼서 사용한다.
//      printf(" %d,", number);
//  }
//
//  va_end(args); // 끝낸다.
//}


/// <summary>
/// printf와 유사하게 동작하나 기능이 제한됨.
/// %d / %c / %s
/// </summary>
/// <param name="format">형식 문자열</param>
/// <param name="">가변 인자값</param>
/// 
//void myprintf(const char* format, ...);

int main(void)
{
    // -14
    // 14  : 0000 0000 0000 0000 0000 0000 0000 1110
    // ~14 : 1111 1111 1111 1111 1111 1111 1111 0001
    // +1  : 1111 1111 1111 1111 1111 1111 1111 0010
    myprintf("My Printf : %d, %c, %s\n", -14, 'A', "Hello");

    return 0;
}

void printNumber(int n)
{
    // 1000 0000 0000 0000 0000 0000 0000
    // 8    0    0    0    0    0    0
    const int isNegative = n & (1 << 31);
    if (isNegative)
    {
        putchar('-');
        n -= 1;
        n = ~n;
    }

    char numberString[16] = "";
    int digitCount = 0;
    do
    {
        int digit = n % 10;

        numberString[digitCount] = digit + '0';
        ++digitCount;

        n /= 10;
    } while (n != 0);

    for (int i = digitCount - 1; i >= 0; --i)
    {
        putchar(numberString[i]);
    }
}

void printString(const char* str)
{
    while (*str != '\0')
    {
        putchar(*str);
        ++str;
    }
}

void myprintf(const char* format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            ++format;

            if (*format == '\0')
            {
                break;
            }

            switch (*format)
            {
            case 'd':
                int n = va_arg(args, int);
                printNumber(n);
                break;
            case 'c':
                int ch = va_arg(args, int);
                putchar(ch);
                break;
            case 's':
                const char* str = va_arg(args, const char*);
                printString(str);
                break;
            }

            ++format;

            continue;
        }

        putchar(*format);
        ++format;
    }

    va_end(args);
}




