#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main(void)
//{
//	char smallLetterWord[100] = "";
//
//	scanf("%s", smallLetterWord);
//
//	for (int i = 0; i <= 26; i++)
//	{
//		char sumWord[100] = i + 97;
//
//		for (int j = 0; j <= 26; j++)
//		{
//			if (smallLetterWord[j] == sumWord[i]);
//			{
//				printf("%d", k++);
//			}
//
//			else
//			{
//				printf("-1 ");
//			}
//		}
//	}
//
//}

// 입력 : 단어를 입력받는다.
	//char S[101] = "";
	//scanf("%s", S);

// 처리 : 알파뱃 위치를 찾는다.

// 각 알파뱃에 대해서 위치값을 저장하기 위해 객체 생성
// int count[26];
// index는 알파뱃과 대응 되어야 함.
// 0-index :a
// 1-index :b
// for(int i=0; i< 26; i++)
// {
//		count[i] = -1;
// }

// 위치는 0-base로 계산 -> index
// for(int i =0; S[i] != '\0'; ++i)
//{
//	int index = S[i] - 'a';
//  이전에 나타난 적이 있는지? => -1 인지
// if (count[index] = -1)
// {
//	count[index] = i;
// }
//}

// 출력 : for(int i=0; i<26; i++)
//
// for(int = 0; word[i] != '\0'; ++i > 문자열 끝까지 보겠단 소리

int main(void)
{
	int repeat[26];
	char wordS[101] = "";
	scanf("%s", wordS);

	for (int i = 0; i < 26; i++) //총 26번
	{
		repeat[i] = -1;
	}
	int check = 0;

	for (int i = 0; wordS[i]!='\0'; i++) //총 26번
	{
		//비교하고 wordS값이랑 다른변수값이랑 같으면 1을 더해준다. default = -1
		for (int j = 97; j <= 122; j++) //알파뱃 a~z
		{
			if (wordS[i] == j && repeat[j-'a'] == -1)
			{
				repeat[j - 'a'] = check;
				check++;
			}
			else if (wordS[i] == j && repeat[j - 'a'] != -1)
			{
				check++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", repeat[i]);
	}	
}
