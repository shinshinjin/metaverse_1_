#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <cstdarg>

//
//
//
//주소연산
//
//
// 1. Type : 데이터를 해석하는 방법
// 2. Memory : 데이터를 저장하는 공간
// 3. Object : 데이터를 저장하는 영역 -> Memory
//
//int main()
//{
//    int a;
//    a = 10; // 왜 이게 되는 것일까?
//
//     연산자는 피연산자를 동반한다.
//     a + b
//     a = b : 할당 연산자는 피연산자가 2개 필요하다.
//     피연산자에 조건. => 타입.
//     모든 연산자는 피연산자의 조건(타입)이 있다.
//
//    int* p;
//    p = &a;
//
//    int arr[5];
//    arr[2];
//    *(arr + 2);
//    (arr + 2); // 배열 + 정수 => 포인터 + 정수 => 주소 연산
//                 int* + int;
//                 int*
//    *(int*) => int
//
//     a[b] == *(a + b);  
//     1. 왜 a + b는 주소 연산일까? => 피연산자의 타입 때문에 주소 연산이란 걸 알게 됨. => a의 타입은 pointer고, b의 타입은 int
//     2. *연산자는 오직 pointer 타입에만 적용할 수 있음. => (a + b)의 타입은 pointer
//     3. 역참조한 값의 타입은? pointer가 가리키고 있는 타입.
//
//    (p + 2); //
//    *(arr + 2); // arr(value) + sizeof(type) * int
//                 &arr[0] + sizeof(int) * 2;
//                
//
//    int arr2[2][3];
//    *(*(arr2 + 2) + 3);
//    arr2 + 2; // arr2 : int(*)[3];
//             주소 연산
//             &arr2[0] + sizeof(int[3]) * 2;
//             첫 번째 원소로부터 24바이트 뒤에 있는 것을 참조.
//             arr2 + 2 : int(*)[3];
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
//
//
//#include <stdio.h>
//#include <stdarg.h>
//
//void myprintf(int count, ...)
//{
//     char* == va_list
//     char의 크기는? 1바이트
//     byte*
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
//
//
// <summary>
// printf와 유사하게 동작하나 기능이 제한됨.
// %d / %c / %s
// </summary>
// <param name="format">형식 문자열</param>
// <param name="">가변 인자값</param>
//void myprintf(const char* format, ...);
//
//int main(void)
//{
//     -14
//     14  : 0000 0000 0000 0000 0000 0000 0000 1110
//     ~14 : 1111 1111 1111 1111 1111 1111 1111 0001
//     +1  : 1111 1111 1111 1111 1111 1111 1111 0010
//    myprintf("My Printf : %d, %c, %s\n", -14, 'A', "Hello");
//
//    return 0;
//}
//
//myprintf
//
///*void printNumber(int n) //숫자입력
//{
//     1000 0000 0000 0000 0000 0000 0000
//     8    0    0    0    0    0    0
//    const int isNegative = n & (1 << 31);
//    if (isNegative)
//    {
//        putchar('-');
//        n -= 1;
//        n = ~n;
//    }
//
//    char numberString[16] = "";
//    int digitCount = 0;
//    do
//    {
//        int digit = n % 10;
//
//        numberString[digitCount] = digit + '0';
//        ++digitCount;
//
//        n /= 10;
//    } while (n != 0);
//
//    for (int i = digitCount - 1; i >= 0; --i)
//    {
//        putchar(numberString[i]);
//    }
//}
//
//void printString(const char* str) //글자입력
//{
//    while (*str != '\0') //참조건 : str이 널이 아닐경우
//    {
//        putchar(*str);
//        ++str;
//    }
//}
//
//void myprintf(const char* format, ...)
//{
//    va_list args;
//    va_start(args, format);
//    int n, ch;
//    const char* str;
//
//
//    while (*format != '\0')
//    {
//        if (*format == '%')
//        {
//            ++format;
//
//            if (*format == '\0')
//            {
//                break;
//            }
//
//            switch (*format)
//            {
//            case 'd':
//                n = va_arg(args, int);
//                printNumber(n);
//                break;
//            case 'c':
//                ch = va_arg(args, int);
//                putchar(ch);
//                break;
//            case 's':
//                str = va_arg(args, const char*);
//                printString(str);
//                break;
//            }
//
//            ++format;
//
//            continue;
//        }
//
//        putchar(*format);
//        ++format;
//    }
//
//    va_end(args);
//} 
//
//int main(void)
//{
//    myprintf("HELLO : %d, %c, %s", 123, 'A', "HELLO");
//
//    return 0;
//}
//
//
//양의 정수 n에 대해서 d(n) = n + (n / 10 + n % 10)
//양의 정수 n이 주어졌을 때, n, d(n), d(d(n)), d(d(d(n)))..
//결과값이 n으로 바뀐다.
//1,3,5,7,9,20,31,42,53,64,75,86,97...9993
//*/
//
//
//assert (오류를 찾는 언어)
//
//void CreateUser(const char* nickname)
//{
//    int n = strlen(nickname);
//    assert(n <= 10); //반드시 만족하려면
//
//    if (n <= 10) //선택적 이라면
//    {
//
//    }
//}
//int main(void)
//{
//    int n = 1;
//    assert(n == 10);
//}
//
//int IsSame(float a, float b)
//{
//    if (a - b < FLT_EPSILON)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//isSame
//int main(void)
//{
//    printf("float의 유효 숫자 : %d\n", FLT_MIN); //f를 사용하면 너무 작은값이라 출력이 안나와서 e 사용
//    printf("double의 유효 숫자 : %d\n", DBL_MIN);
//    printf("long double의 유효 숫자 : %d\n", LDBL_MIN);
//}
//{
//    float f = 1.0 - 0.7;
//    if (f == 0.3)
//    {
//        printf("출력 되니?");
//    }
//
//    if (IsSame(f, 0.3))
//    {
//        printf("같음");
//    }
//}
//          
//
//
//div_t result = div(a, b)
//int main(void)
//{
//     사용자로부터 두 수를 입력 받고
//    int a, b;
//    printf("두 수를 입력해 : ");
//    scanf("%d %d", &a, &b);
//     몫과 나머지를 출력해보세요.
//    
//    div_t result = div(a, b);
//    printf("몫 : %d, 나머지 : %d\n", result.quot, result.rem);
//
//}
//
//int main(void)
//{
//    time_t result = time(NULL);
//    printf("현재 시간 : %s\n", asctime(gmtime(&result))); 
//    asctrime_s(str, sizeof(str), gmtime(&result)) 
//    printf("현재 시간 : %s\n , str); -> 그리니치천문대 기준
//}
//
//파일 입출력
//
///*int main(void)
//{
//     1. 파일을 다루기 위한 객체 생성
//    FILE* fp = NULL;
//
//     2. 파일을 연다.
//     1) 텍스트 파일 : 텍스트 에디터로 열 수 있는 파일로 우리가 읽을 수 있는 문자로 구성
//     2) 바이너리 파일 : 그 외의 모든 파일
//    fopen_s(&fp, "Metaverse.t", "w"); // 확장자는 안 적어도 된다 : .txt
//
//    if (0 != fopen_s(&fp, "Metaverse.txt", "w"))
//    {
//        printf("오류 발생.");
//
//        return 1;
//    }
//
//     3. 컨텐츠를 작성한다. (파일을 조작한다.)
//     
//     텍스트 파일에 작성할 수 있는 함수 : fputs() / fputc() / fprintf()
//     바이너리 파일에 작성할 수 있는 함수 : fwrite()
//    fputs("Hello File!", fp);
//    fputc('J', fp);
//    fprintf(fp, "\nThe name of the queen : %s\n", "퀸균지"); //멀티바이스 방식(한글)
//
//     4. 파일을 닫는다.
//    fclose(fp);
//
//    if (0 != fopen_s(&fp, "Metaverse.txt", "r"))
//    {
//        printf("오류 발생함.");
//
//        return 1;
//    }
//     텍스트 파일에서 읽어들일 수 있는 함수 : fgets() / fgetc() / fscanf()
//     바이너리 파일에서 읽어들일 수 있는 함수 : fread()
//    char ch = fgetc(fp);
//    char str[128] = "";
//    fgets(str, sizeof(str), fp); //개행 문자까지 받아들인다.
//    char str2[128] = "";
//    fscanf(fp, "The name of the queen : %s", str2, sizeof(str2));
//
//    printf("읽어들인 문자 : %c\n", ch);
//    printf("읽어들인 문자열 : %s\n", str);
//    printf("퀸은 누구? : %s\n", str2);
//
//    fclose(fp);
//
//     --------------------------
//     바이너리 파일
//     --------------------------
//    if (0 != fopen_s(&fp, "Metaverse2", "wb"))
//    {
//        printf("오류 발생했다.");
//
//        return 1;
//    }
//
//    struct Student
//    {
//        int Age;
//        enum { A, B, O, AB } BloodType;
//        char Name[24];
//    };
//
//    struct Student s = { 20, A, "ChoiSeonMun" };
//
//    if (1 != fwrite(&s, sizeof(s), 1, fp))
//    {
//        printf("오류 발생했다!");
//
//        fclose(fp);
//
//        return 1;
//    }
//
//    fclose(fp);
//
//    if (0 != fopen_s(&fp, "Metaverse2", "rb"))
//    {
//        printf("오류 발생생.");
//
//        return 1;
//    }
//
//    struct Student s2 = { 0 };
//    if (1 != fread(&s2, sizeof(s2), 1, fp))
//    {
//        printf("오류 발생송");
//
//        fclose(fp);
//
//        return 1;
//    }
//
//    printf("나이 : %d, 혈액형 : %d, 이름 : %s\n", s2.Age, s2.BloodType, s2.Name);
//
//    fclose(fp);
//
//    return 0;
//
//
//
//}*/
//
//문자열 입출력
///*int main(void)
//{
//    const char* input = "퀸은 누구인가? 퀸균지";
//
//    char str[128] = "";
//    sscanf_s(input, "퀸은 누구인가? %s", str, sizeof(str));
//
//    char str2[128] = "";
//    sprintf(str2, "그렇다. 퀸은 %s였다.", str);
//
//    puts(str2);
//
//    return 0;
//}*/
//
//동적 할당
//int main(void)
//{
//    10    
//    int[10]
//    printf("필요한 공간 개수 입력 : ");
//    int n;
//    scanf_s("%d", &n);
//
//    메모리 누수
//   /* while (1)
//    {
//        malloc(sizeof(int) * n);
//        Sleep(100);
//    }*/
//
//     메모리는 자원(Resource)이다. 
//     자원이라는 것은 시스템으로 부터 빌려와서 사용이 끝나면 돌려줘야 하는 것들.
//     사용이 끝난 메모리를 돌려주지 않으면 메모리 누수(Memory Leak가 발생
//
//    int* p = malloc(sizeof(int) * n);
//    for (int i = 0; i < 10; ++i)
//    {
//        p[i] = i;
//    }
//
//    free(p); // 힙에 메모리를 반환.
//      p = NULL; // 해제가 됐다면 꼭 NULL 포인터로 만들어 줄 것
//
//     *p;
//    free(p);
//
//     메모리를 수동으로 관리할 때 문제점
//     1. 언제 사용이 끝나는지 불명확함. -> 반환이 안될 수 있음. -> 메모리 누수 발생
//     2. 반환이 됐음에도 불구하고 접근하는 경우
//     3. 반환이 됐음에도 불구하고 또 반환하는 경우 -> 이중 해제(Double Free)
//
//    return 0;
//}
//
// typedef : 타입을 재정의 하는 것.어떤 타입에 별명을 지어주는 것
// typedef type identifier;
///*typedef char byte;
//
//typedef struct tagA
//{
//    int n 
//}A;
//
//
//int main(void)
//{
//    byte a;
//
//    va_list args;
//
//    A a;*/
//
//}

// 함수의 식별자는 유일해야 한다. -> 함수는 재정의 할 수 없다.

// Stack : 정적 할당 영역 -> 함수가 사용하는 공간 -> 이미 얼마나 메모리를 사용해야할지 알고 있다.
// Heap : 동적 할당 영역 -> malloc()
// Data : 정적 데이터
// Code : 프로그램 명령어

//void Add(int a, int b)
//{
//	int result = a + b;
//	return result;
//}

//void __cdecl Foo(int a, ...)
//{
//
//}
//
//struct 
//
//void __fastcall Foo2(struct A, ...)
//{
//
//}


//int main(void)
//{
//	int a = 10; // 4바이트
//
//	Foo(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
//
//	// Add(10, 20);
//	// 20, 10
//	// add esp, 8
//	
//	////int c = Add(10, 20); 
//
//	struct A = { 10, 20 };
//	Foo3(10, 20);
//
//}

//void __fastcall Foo2()
//{
//}

//void Foo(int* p)
//{
//	p += 1;
//	*p = 20;
//
//	int a = 20;
//	int b = 30;
//}


int main(void)
{
	int a = 10;
	int b = 20;

	printf("%d", a);

	return 0;
}




// 함수가 사용하는 메모리 : 스택(Stack)
// 함수와 관련된 내용(스택 프레임)
// 1. 얼마나 메모리를 사용할 것인지 -> 임시 데이터
// 2. 매개변수 (인자)
// 3. 반환 주소
// 스택 관리는 bp, sp를 이용함.
// bp : 함수가 사용하는 메모리의 시작주소
// sp : 함수가 사용할 수 있는 메모리의 끝 주소

// 호출 규약(Calling Convertion)
// -> 인자를 어떻게 전달할 것이며, 반환값을 어떻게 돌려줄 것인가
// x86
// __cdecl : 기본 호출 규약, 인자는 오른쪽부터 왼쪽 순서대로 스택에 넣고, 스택정리는 호줄자가 한다. 가변 인자 사용 가능
// __stdcall : 인자를 오른쪽부터 왼쪽 순서대로 스택에 넣고, 스택 정리는 피호출자가 한다. 가변 인자 사용 불가능
// __fastcall : 첫 번째 인자와 두 번째 인자를 레지스터에 저장하고, 나머지 인자는 오른쪽에서 왼쪽 순서대로 스택에 넣음. 스택 정리는 피호출자가 한다.
// 
// x64
// 4번째 인자까지 레지스터에 넣고, 스택정리는 피호출자가 한다.