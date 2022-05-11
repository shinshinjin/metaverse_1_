#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <string.h>

char* strrchr(char* str1, char target) //strrchr : 문자열을 뒤에서 찾는 것.
{
	char* firstchr = str1; // 첫글자를 저장한다.

	if (*str1 == target) // 첫글자가 찾는 글자일때
	{
		return str1; //str1 반환
	}

	while (*str1 != '\0'	) //str1이 NULL 값이 아닐경우
	{
		str1++; //str1 증감 -> str1 값의 끝까지 감.
	}

	if (*str1 == target) //마지막글자가 찾는 글자일 때,
	{
		return str1; //str1 값을 반환한다.
	}

	while (*str1 != *firstchr) // 위의 조건을 만족하지 않을 때 마지막부터 처음까지 반복
	{
		if (*str1 == target) //찾는 글자일 경우
		{
			return str1; //str1 값을 반환한다.
		}
		str1--; //아닐 경우 str1 값을 1칸만큼 앞으로 옮긴다.
	}

	return NULL; //찾는글자가 없다면 NULL값을 반환한다.
}

int main()
{
	char string[100]= "I want to go home";
	char target = 'h';

	char returnSave = strrchr(string, target);
	printf("%c", returnSave);
}