#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int testCase;
//	scanf("%d", &testCase);
//
//	for (int i = 0; i < testCase; i++)
//	{
//		int studentCount = 0;
//		scanf("%d", &studentCount);
//
//		int scoreAdd = 0;
//		int scoreArr[1000] = { 0 };
//
//		for (int j = 0; j < studentCount; j++)
//		{
//			scanf("%d", &scoreArr[j]);
//			scoreAdd += scoreArr[j];
//		}
//		float avg = (float)scoreAdd / studentCount;
//		int overAvgCount = 0;
//
//		for (int j = 0; j < studentCount; j++)
//		{
//			if (avg < scoreArr[j])
//			{
//				overAvgCount++;
//			}
//		}
//		float result = (float)overAvgCount / studentCount * 100;
//		printf("%.3f%%\n", result);
//	}
//	return 0;

// 최소값은 다른 모든 수보다 작다
// 최댓값은 다른 모든 수보다 크다.

// 최대값, 최소값
// [][][][][]
// 각 원소를 후보(얘가 최솟값 / 최댓값이라는 가정)로 등록
// 다른 모든 원소와 비교해보면서 가정이 참인지 확인

// 첫 번째 원소를 후보로 등록
// 두 번째 원소부터 마지막 원소까지 비교하면서
// 1. 더 작은 애가 나오면 => 최솟값 업데이트
// 2. 더 큰애가 나오면 => 최댓값 업데이트

/*
1. 입력
// Case#1 : 10, 20, 30
int caseNum, data1, data2, data3;
scanf("Case#%d" : %d %d %d, &caseNum, &data1, &data2, &data3);

2. 출력
// Case 1# ? 10 - 20 - 30
printf("Case %d# ? %d - %d - %d", caseNum, data1, data2, data3);

3. 연산
// 할당

// 증감 -> 평가 결과가 다르다ㅏ
++a; // 1이 증가된 a의 데이터
a++; // 증가가 되지 않은 이전의 a 데이터

4. 분기문
- if / switch

5. 반복문
- for / while / do-while
- for : 반복 횟수가 정해져 있을 때
- while : 반복 횟수가 정해져 있지 않을 때
- do while : 조건식 평가가 나중에 일어나야 할 때

6. 배열
- 같은 성질의 여러 데이터를 한 번에 다루기 위한 것.




int a = 0x24;
// 0010 0100

a * 2;

a << 1; => 빠른 곱셈
// 0100 1000

a / 2^2
a >> 2; => 빠른 나누기
// 0001 0010

signed char ch = -1;
// 0000 0001 -> NOT 연산 -> 1111 1110 -> 1111 1111

// 1111 1111

ch >> 2; (부호비트가 복사된다)
// 1111 1111
ch << 2; 라면
// 1111 1100

// 0011 1111
ch >> 1;
// 0001 1111

// 0011 1111
ch << 1;
// 0111 1110


// 0000 0001 +
// 0000 0000   


//함수 : 일련의 코드에 이름을 붙인 것
//API
// Application Programmming
Interface -> 함수 하나를 일컫는 단어

// Standard : 플랫폼에 독립적이다.

// Library : 유용한 API의 모음



