#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//
//	int N = 0;
//
//	scanf("%d", &N);
//
//	for (int gugudan = 1; gugudan <= 9; gugudan++)
//	{
//		printf("%d * %d = %d\n", N  , gugudan, N * gugudan);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int A = 0;
//	int B = 0;
//	int TestTry = 0;
//
//	scanf("%d", &TestTry);
//
//	for (int i = 0; i < TestTry; i++)
//	{
//		scanf("%d %d", &A, &B);
//
//		printf("%d\n", A + B);
//		
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	int j = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		j += i;
//	}
//
//	printf("%d", j);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int TestCase = 0;
//	int A = 0;
//	int B = 0;
//
//	scanf("%d", &TestCase);
//
//	for (int i = 1; i <= TestCase; i++)
//	{
//		scanf("%d %d", &A, &B);
//
//		printf("%d\n", A+B);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int N = 0;
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int N = 0;
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d\n", N-i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int TestCase = 0;
//	int A = 0;
//	int B = 0;
//
//	scanf("%d", &TestCase);
//
//	for (int i = 1; i <= TestCase; i++)
//	{
//		scanf("%d %d", &A, &B);
//		printf("Case #%d: %d\n", i, A + B);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int TestCase = 0;
//	int A = 0;
//	int B = 0;
//
//	scanf("%d", &TestCase);
//
//	for (int i = 1; i <= TestCase; i++)
//	{
//		scanf("%d %d", &A, &B);
//		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
//	}
//	return 0;
//}

//--백준 반복문_별찍기 -1
//#include <stdio.h>
//
//int main(void)
//{
//	int N = 0;
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j <= i; j++)
//			printf("*");
//			printf("\n");
//	}
//
//	return 0;
//}

//--백준 반복문_별찍기 -2
//#include <stdio.h>
//
//int main(void)
//{
//	int N = 0;
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = N; j > i+1; j--)
//			printf(" ");
//		for (int k = 0; k <= i; k++)
//			printf("*");
//			printf("\n");
//	}
//	return 0;
//}

//--백준 반복문_X보다 작은수
//#include <stdio.h>
//
//int main(void)
//{
//	int N = 0;
//	int X = 0;
//	int SequenceA = 0;
//
//	scanf("%d %d", &N, &X);
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", & SequenceA);
//		
//		if (X > SequenceA)
//		{
//			printf("%d", SequenceA);
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//--백준 반복문_A+B-4
//#include <stdio.h>
//
//int main(void)
//{
//	int A = 0;
//	int B = 0;
//
//	while (scanf("%d %d", &A, &B) != EOF) //문자의 끝이 나올 때 까지 계속 입력받는다.
//	{
//		printf("%d\\n", A + B);
//	}
//
//}

//--백준 반복문_A+B-5
//#include <stdio.h>
//int main(void)
//{
//	int A;
//	int B;
//
//	while (1)
//	{
//		scanf("%d %d", &A, &B);
//		if (A == 0 && B == 0)
//		{
//			break;
//		}
//
//		printf("%d\n", A + B);
//	}
//
//	return 0;
//}

