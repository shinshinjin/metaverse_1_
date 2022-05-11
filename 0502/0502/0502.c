#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int number = 1e6;
	double result = 1 / (double)3;
	int arr[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };

	char* str = "Hello World!";
	const char* str2 = "Drunken";
	const char* str3 = "Jaesung";

	char str4[] = "Hello World!";

	printf("%d\n", arr[2][2]);
	printf("%d\n", number);
	printf("%f\n", result);
	printf("%s", str4);

	return 0;
}