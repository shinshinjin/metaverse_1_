#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main(void)
//{
//
//	char word[128] = "Kartrider Master";
//	size_t len = strlen(word);
//// if (0 == strcmp(word, "Kartrider Master"))
////{
////	puts("같음");
////}
//
//	printf("%d", len);
//
//
//}
//-> strlen(string length)


/*typedef char byte;
-> 캐릭터 타입 재정의

ex) byte b = 127;




strcpy
strncpy
strcat
strlen(string length)
strcmp(string compare) : 사전순으로 누가 더 빨리 읽는지(0: 같다, 양수 : 오른쪽이 더 빠르다...)
strchr(string char)
strtok(string token)


int main(void)
{
char input[] = "A bird came down the walk";

	Pointer : 데이터를 메모리 주소값으로 해석
	Type* Identifier;
	int* p; -> pointer to int
	int num = 10;
	int* p2 = NULL;
	int* p = &num; (P를 통해서 num에 접근할 수 있다.)
	*p = 20


	int a = 10; // a : 0x1234 -> 0xabcd
	int b = 20; // b : 0x5678 -> 0x5780
	
	// a <-> b
	int temp = a;
	*a = b;
	*b = temp;

	int num = 10;
	int* p2 = NULL;
	itn* p = &num;
	
	int * * p3 = &p; // pointer to pointer to int

	int *** p4 = &p3; // pointer to pointer to pointer to int
	***pt = 50;
	*p =20;



	 왜 포인터를 사용해야 하는가?
	-> 다른 범위에있는 메모리에 접근하귀 위함
	- 메모리에 접근하는 방법은 2가지가 있다.
	1. 직접 참조(Direct Reference / Direct Access) : 메모리 주소에 직접 접근하는 것
	ex) num = 20; 
	2. 간접 참조(Indirect Reference / Indirect Access) : 메모리 주소를 포인터를 통해서 접근하는 것
	ex) *p = 20;
	// 주소연산자(포인터에서) : &, ex)&number

	Scope(범위) : 프로그램이 식별자를 찾을 수 있는 영역
	1. Block scope -> Local Variable / 지역 변수 
	-> 함수 내에 정의된 함수
	
	a;
	{
		int a;
	}
	a;

	2. File scope : Global Variable / 어디서나 찾을 수 있다. 
	-> 함수 밖에 정의되어 있는 것은 file scope를 가진다.

	// Pointer Type 크기는 얼마인가?
	// Pointer Type : 데이터를 메모리 주소값으로 해석한다.
	// x86 : 4byte
	// x64 : 8byte	

	printf("\n%d", sizeof p);
	puts("");
	> 비트수 나옴

	// + - : 메모리 주소를 가리키고 있는 타입의 크기만큼 옮긴다.
	// Address Operation
	int arr[2] = { 10, 20};
	p = arr; // arr의 첫 번쨰 원소의 주소를 가리키게 된다.
	p = p + 1; // &arr[1]
	p = p - 1; // &arr[0]
	++p;
	--p;
	p++;
	p--;

	char* pch; // pointer to character
	pch + 1; // 1 byte 만큼 뒤로.
	pch - 1; // 1 byte 만큼 앞으로.

	// a[b] -> *(a+b);
	
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	arr[2] == *(arr + 2);
	p = arr;
	p[2];	
	// 주의 : 역참조 연산자와 증감 연산자를 결합할 때 연산 순서를 유의해야 한다.
	int num2 = *++p; (*p; p++;)
	num2 = *pp;
	num2 = ++(*p);

	문자열의 끝은 : null 문자이다.

	단어별로 따로보고싶다 : 공백을 주면 결과가 하나씩 나온다.  

	매개면수(Parameter)
	함수에서 사용되는 변수. 함수 외부에서 입력값을 받기 위해 사용.

	함수를 사용한다는 것은 코드를 재사용하기 위함이다.

	함수를 호출한다. 호출한 사람을 호출자(caller), 호출된 함수를 피호출자(callee)
	호출자에게 내가 계산한 결과를 '반환' 해줄 수 있다.
	반환은 return문을 사용함. 반환 값은 반환 타입과 일치해야 함.
	반환해줄 것이 없다면 void 타입을 사용.

	int sum(int x, int y)
	{
		retrun x + y;
	}
	
	void foo()
	{
		if (1)
		{
			// 반환 타입이 void인 경우에도 return문을 사용할 수 있다. 
			// 함수를 중간에 끝낼 때 사용한다.
			return;
		}
	}

// 3개의 입력을 받아 모든 입력값을 더해서 반환하는 함수 sum3()을 만들어라.
int sum3(int x, int y, int z)
{
	return x + y + z;
}





	// f(x) = x;
	int foo(int x)
	{
		return x;
	}

	int main(void)
	{
		// () : call Operator
	int a = sum(1, 2); // 인자(Argument) : 매개변수의 초깃값
	int b = sum(2, 3);
	int c = sum(3, 4);
}
*/

/*long long sum(int* a, int n)
{
	long long result = 0LL;
	for (int i = 0; i < n; i++)
	{
		result += a[i];
	}

	return result;
}*/

// Swap() : 2개의 정수를 받아 서로 데이터를 교환

//int Swap(int* x, int* y)
//{
//	int swap = *x;
//	swap = *x;
//	*x = *y;
//	*y = swap;
//	return 0;
//}
//
//int main(void)
//{
//	int x = 10, y = 20;
//	Swap(&x, &y);
//
//	printf("%d %d", x, y);
//	return 0;
//
//}

// islower() : 한 개의 문자를 받아 소문자인지 판별한다.

//int islower(char c);
//{
//	if ('a' <= c && c <= 'z')
//	{
//		return 1; 
//	}
//	else
//	{
//		return 0;
//	}
//}

// isupper() 

//int isupper(char c)
//{
//	if ('A' <= c && c <= 'Z')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//
//int main(void)
//{
//	char c;
//
//	scanf("%c", &c);
//
//	if (isupper(c))
//	{
//		printf("대문자");
//	}
//	else
//	{
//		printf("대문자아님");
//	}
//
//	return 0;
//
//
//}

// 대문자를 소문자로 바꾸기
//char tolower(char c)
//{
//	if ('A' <= c && c <= 'Z')
//	{
//		return c + 32;
//	}
//	else
//	{
//		return c;
//	}
//}
//char toupper(char c)
//{
//	if ('a' <= c && c <= 'z')
//	{
//		return c - 32;
//	}
//	else
//	{
//		return c;
//	}
//}
//
//int main(void)
//{
//	printf("%c\n", tolower('6'));
//	printf("%c\n", tolower('D'));
//	printf("%c\n", tolower('a'));
//	printf("%c\n", tolower('!'));
//
//	return 0;
//}

// strlen() : 문자열의 길이를 구하는 함수
// 배열을 받으려면 포인터를 사용해야 한다.
// 배열을 매개변수로 받는 함수는 배열의 크기를 같이 받는다.
// 문자열의 특징 : 문자열의 끝은 널 문자(Null character)다. 따라서 배열의 크기를 않아도 끝을 알 수 있다.
// 매개변수 1개 -> 문자열을 저장하기 위한 객체 -> pointer to char
//
//int strlen(const char* str) // const 쓰는 이유 : 수정될 일이 없기 때문에.
//{
//	// int 쓰는이유 : 문자열의 길이를 구해야 하니까.
//	// arr : pointer to int
//	// 어떻게 문자열의 길이를 구할 수 있을까?
//	// 1. str은 문자열이다.
//	// 2. 문자열의 끝은 널 문자다.
//	int result = 0;
//	for (int i = 0; str[i] != '\0'; ++i)
//	{
//		++result;
//	}
//}
//
////while (*str != '\0')
////{
////	++str;
////	++result;
////}
////
////while (*str != '\0')
////{
////	++result;
////}
////return result;
//
//
//int main(void)
//{
//	const char* str = "Every day brought a sense of grave, historic events and decisions that will not just decide who wins the biggest land war between two countries in Europe since World War II, but will shape the course of the rest of the 21st century.";
//		printf("문자열의 길이 : %d", strlen(str));
//	return 0;
//}

// strchr() : 문자열에서 특정 문자의 위치를 찾는 것
// 입력 : 문자열(const char*), 내가 찾을 문자(const char)
// 처리 : 입력된 문자열에서 그 문자가 나온 위치(메모리 주소)를 찾는다.
// 출력 : 문자의 위치 => 그 문자가 있는 메모리 주소값(char*)
// 1. 문자가 있는 경우 -> 그 문자의 위치를 반환
// 2. 문자가 없는 경우 -> NULL
// char* pos = strchr("Hello, 'l');
// "Hello" < 를 가리키고 있어야 함.

// 1. 문제 정의 -> 입력, 처리, 출력. 문제를 충분히 해결할 수 있을 정도로 계속해서
// 작은 단위로 쪼개서 생각해야 함.
// 2. 작은 문제로 쪼갰다면 그 문제를 해결할 절차를 기술한다.
// 3. 문제를 해결하기 위해 어떤 데이터가 필요한가? -> 즉, 어떤 데이터를 저장해야 하는가?


// strrchr()

char* strchr(const char* str, const char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return (char*)str;
		}
		++str;
	}

	return NULL;
}



int main()
{

}

