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

//#include <stdio.h>
//int main()
//{
//	int tryN; //횟수
//	scanf("%d", &tryN);
//
//	int MinN = 1000000;
//	int MaxN = -1000000; 
//	int Nums; //입력값
//
//	for (int i = 0; i < tryN; i++)
//	{
//		scanf("%d", &Nums);
//
//		if (Nums < MinN)
//			MinN = Nums;
//
//		if (Nums > MaxN)
//			MaxN = Nums;
//	}
//
//	printf("%d %d\n", MinN, MaxN);
//
//	
//}

//1. 8개를 가진 배열을 하나 만든다.
//2. 그 중 최대값을 찾는다. 주어지는 자연수는 100보다 작다.
//3. 첫째줄에 최대값을 출력하고, 둘째줄에 최댓값이 몇 번째 수인지를 출력한다.

//#include <stdio.h>
//int main(void)
//{
//	int A, B, C;
//	scanf("%d %d %d", &A, &B, &C);
//
//	int result = A * B * C;
//
//
//	// 0 ~ 9 : 숫자랑 일치.
//	int countForDigit[10] = { 0 };
//
//	while (result != 0)
//	{
//		int digit = result % 10;
//		++countForDigit[digit];
//		result /= 10;
//	}
//	// 0 => countForDigit[0];
//	// 1 => countForDigit[1];
//	// ...
//	// 9 => countForDigit[9];
//
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d\n", countForDigit[i]);
//	}
//
//	return 0;

	//각 자리수에 위치한 숫자가 몇번 등장했는지 확인해야 한다.
	// result = 1234;
	// 1. 일의 자리수(Digit)는 result % 10을 해서 알 수 있다.
	// digit = result % 10; => 4
	// 2. countForDigit[digit] += 1;
	// countForDigit[digit]++;
	// 3. result /= 10;
	// result = 123
	// --> 1~3을 반복
	// 4. 모든 자릿수를 확인할 때 까지 => result == 0





	// 입력부
	// 문제 : (1)3개의 자연수를 입력 받아야 한다.
	
	// (1-1)객체는 3개가 필요하고, 자연수니까 int형 변수 3개 정의
	// int A, B, C;
	
	//(1-2) 유저로부터 입력을 받아야 한다. => scanf()
	// scanf("%d %d %d", &A, &B, &C);

	// 처리부
	// 문제 : (1) A * B * C를 계산한다.
	// (2) 계산한 결과값에서 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지 구한다.

	// (1) A * B * C를 계산한다.
	// int result = A * B * C;

	// (2) result에서 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지 구한다.
	// (2-1) 각 자리수는 무엇인가? 
	// result % 10 / 1의 자리수
	// result % 100 / 10 => 10의 자리수
	// result % 1000 / 100 => 100의 자리수
	// result % 10000 / 1000 => 1000의 자리수 
	// 
	// for(int i = 0; i < 10 ; ++i)
	// {
	//	int digit = result % (10*i) / i;
	// }
	// 
	// while (result != 0)
	// {
	//	int digit = result % 10;
	//	countForDigit[Digit]++
	//	result /= 10;
	// }
	// 
	// 
	// (2-2) 각 숫자가 현재까지 몇 번 나왔는지 저장한다.
	// 10개의 객체가 필요하다.
	// int countFor0 = 0;
	// int countFor1 = 0;
	// ...
	// int countFor9 = 0;
	// -> int countForDigit[10] = { 0 };
	// 대응되는 원소?
	// countForDigit에 사용할 수 있는 index 범위는? 0 ~ 9
	// 0 => countForDigit[0]
	//  => countForDigit[1]
	// ...
	// 9 => countForDigit[9]
	// countForDigit[index]

	// 1을 더한다.
	// countForDigit[index] += 1;
	// ++countForDigit[index]
	// countForDigit[index]++


	// 출력부
	// 문제 : 0부터 9까지 몇 번 쓰였는지 출력한다.

	// 0 => countForDigit[0]
	// 1 => countForDigit[1]
	// ...
	// 9 => countForDigit[9]
	// for (int i = 0; i < 10, ++i)
	// {
	// printf("%d\n", countForDigit[Digit])
	// }	

#include <stdio.h>
int main(void)
{
	//입력
	//사용자가 서로다른 9개의 자연수 입력	   
	int Number[9] = { 0 }; //입력값 9개
	int maxNum = 0; //최대값
	int maxPosition = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &Number[i]); //number0부터 number8까지 들어간다.
	}

	for (int i = 0; i < 9; i++)
	{
		if (maxNum < Number[i])
		{
			maxNum = Number[i];
			maxPosition = i + 1;
		}
	}
	printf("%d\n%d", maxNum, maxPosition);


	//처리
	//배열을 설정해서 최대값이 뭔지 찾는다.
	//어케찾노?

	//출력
	//첫째줄에 최대값을 출력하고, 둘째줄에 최대값이 몇 번째 수인지 출력

}