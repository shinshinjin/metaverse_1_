#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	/*
	// 각 x, y 좌표

	//플레이어 좌표

	srand(time(NULL));
	int player_x = rand() % 10;
	int player_y = rand() % 10;
	//탈출구
	int escape_x = rand() % 10;
	int escape_y = rand() % 10;
	//입력키
	int input_key = 0;

	while (true)
	{
		system("cls");

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i == player_x && j == player_y)
					cout << "●";

				else if (i == escape_x && j == escape_y)
					cout << "◎";

				else
					cout << "○";
			}
			cout << endl;
		}

		switch (_getch())
		{
		case 'w':
		{
			if (player_x > 0)
			{
				player_x -= 1;
			}
			break;
		case 's':
			if (player_x < 9)
			{
				player_x += 1;
			}
			break;
		case 'd':
			if (player_y < 9)
			{
				player_y += 1;
			}
			break;
		case 'a':
			if (player_y > 0)
			{
				player_y -= 1;
			}
			break;

		default:

			break;

		}


		}

		if ((player_x == escape_x && player_y == escape_y))
		{
			system("cls");
			cout << " 굿 " << endl;
			break;
		}

	}



	*/

	//1. 두 정수를 입력받은 후 두 정수의 사칙연산 + 나머지(%) 결과를 출력하기
/*
	int input_key_first = 0;
	int input_key_last = 0;
	char arit = 0;

	cout << " 첫 번째 정수를 입력해주세요. " << endl;
	cin >> input_key_first;

	cout << " 두 번째 정수를 입력해주세요. " << endl;
	cin >> input_key_last;

	cout << input_key_first << " + " << input_key_last << + " = " << (input_key_first + input_key_last) << endl;
*/
//2. 최소값과 최대값을 입력받은 후 두 수 사이의 랜덤한 숫자 1개 출력하기
/*
	int min_num = 0;
	int max_num = 0;
	int random = 0;

	cout << " 최소값을 입력해주세요." << endl;
	cin >> min_num;

	cout << " 최대값을 입력해주세요." << endl;
	cin >> max_num;

	srand(time(NULL));

	cout << " 랜덤값은 " << rand() % (max_num - min_num - 1) + min_num << " 입니다. ";
*/
// 해결되지 않은 문제 : 1 차이가 날때 출력이 안됨.

//3. 1~3사이의 숫자를 입력받은 후 입력받은 숫자에 따라 다른 인삿말이 나오도록 하기
//  (출력 예시 : 숫자를 입력하시오(1~3) : 3 좋은 하루입니다.)
/*
cout << "숫자를 입력하시오(1~3)" << endl;

int input_key = 0;

cin >> input_key;

	switch (input_key)
	{
	case 1:
		cout << "좋은 하루입니다." << endl;
		break;
	case 2:
		cout << " 반갑습니다, " << endl;
		break;
	case 3:
		cout << " 안 반갑습니다. " << endl;
		break;
	default:
		cout << " 다시 입력해주세요." << endl;
		break;
	}
*/

//4. 1부터 100까지의 숫자를 차례대로 출력하기
// 출력되는 숫자의 옆에 홀수이면 홀수, 짝수이면 짝수라고 표시하기
// 출력되는 숫자의 옆에 3의 배수이면 3의 배수라고, 5의 배수는 5의 배수라고 표시하기
// (출력 예시
//	1 홀수
//	2 짝수
//	3 홀수 3의 배수
//	4 짝수
//	5 홀수 5의 배수
//	6 짝수
/*
		for (int i = 1; i <= 100; i++)
		{
			if (i % 2 == 0)
			{
				cout << i  << " : 짝수";
				if (i % 3 == 0)
					cout << " : 3의 배수";
				if (i % 5 == 0)
					cout << " : 5의 배수";
			}

			else if (i % 2 == 1)
			{
				cout << i  << " : 홀수";
				if (i % 3 == 0)
					cout << " : 3의 배수";
				if (i % 5 == 0)
					cout << " : 5의 배수";
			}


			cout << endl;
		}
*/
/*
//5. 1~100 사이의 임의의 숫자를 맞추는 게임
오답을 입력하면 컴퓨터가 정답이 오답보다 큰지 작은지 알려주고
다섯 번 안에 못맞추면 게임 오버*/
/*
	int input_key = 0;
	int correct_num = 0;

	srand(time(NULL));

	correct_num = rand() % 99 + 1;
	cout << "미리보는 정답 : " << correct_num << endl;

	cout << " 1~100 사이 숫자를 맞춰 보세요 : " << endl;

	for(int i = 0; i < 5; i++)
	{
		cin >> input_key;

		if (input_key == correct_num)
		{
			cout << " 정답입니다";
			break;
		}

		else if (i < 4)
		{
			cout << "오답입니다. 남은 기회는" << 4 - i << "번 남았습니다.";
			input_key > correct_num ? cout << "더 작습니다." << endl : cout << "더 큽니다." << endl;

			
		}
		else 
		{
			cout << "정답은" << correct_num << "이었습니다." << endl;
		}

		cout << endl;

	} 

*//*
6. 숫자 대신 알파벳 중 하나를 입력받고 컴퓨터가 생각하는 알파벳과 같은 값을 찾는
게임 만들기.기본 규칙은 5번과 비슷
(틀렸을 때 입력한 문자보다 앞에 있는지, 뒤에 있는지 알려주고 5번까지 기회를 준다)*/

// 아스키코드 A=65, Z=90, a=97, z=122
/*
char input_key;
char correct_key;

srand(time(NULL));
correct_key = rand() % 26 + 65; 

cout << " A~Z 사이로 알파벳을 맞춰보세요" << endl;

	for (int i = 0; i < 5; i++)
	{
		input_key = _getch();
		cout << "미리보는 정답 : " << correct_key << endl;

		if (input_key >= 97 && input_key <= 122)
		{
			input_key -= 32;
		}

		if (input_key == correct_key)
		{
			cout << " 정답입니다." << endl;
			break;
		}

		else if (i<4)
		{
			cout << " 오답입니다. " << " 남은 기회는 " << 4 - i << "번 남았습니다." << endl;
			input_key > correct_key ? cout << "A쪽으로" << endl : cout << "Z쪽으로" << endl;
		}

		else
			cout << " 정답은 " << correct_key << " 였습니다. " << endl;

	}
*/

//7. 몬스터라는 구조체를 만들고 5개를 선언하시오. 5개의 이름은 cin으로 입력받게 하고
//몬스터의 공격력, 방어력은 랜덤으로 설정되도록 하시오.
//그 후 1~5 사이의 숫자를 입력하면 번호에 해당하는 몬스터의 이름, 공격력, 방어력을
//출력하시오

string mon_name[5]; 
int input_num = 1;

srand(time(NULL));
int damage = rand() % 100 + 1;
int shiled = rand() % 100 + 1;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 포켓몬의 이름을 설정하세요. : ";
		cin >> mon_name[i];
	}

	cout << "포켓몬 넘버를 입력해주세요 : ";
	cin >> input_num;

switch (input_num-1)
	{
	case 0:
		cout << " 포켓몬 명 : " << mon_name[0] << endl;
		cout << " 공격력: " << damage << endl;
		cout << " 방어력: " << shiled << endl;
		break;
	
	case 1:
		cout << " 포켓몬 명 : " << mon_name[1] << endl;
		cout << " 공격력: " << damage << endl;
		cout << " 방어력: " << shiled << endl;
		break;
	
	case 2:
		cout << " 포켓몬 명 : " << mon_name[2] << endl;
		cout << " 공격력: " << damage << endl;
		cout << " 방어력: " << shiled << endl;
		break;
	
	case 3:
		cout << " 포켓몬 명 : " << mon_name[3] << endl;
		cout << " 공격력: " << damage << endl;
		cout << " 방어력: " << shiled << endl;
		break;
	
	case 4:
		cout << " 포켓몬 명 : " << mon_name[4] << endl;
		cout << " 공격력: " << damage << endl;
		cout << " 방어력: " << shiled << endl;
		break;

	default:
		break;
	}

}

