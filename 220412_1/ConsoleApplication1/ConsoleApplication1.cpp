/*

	boolean 타입
	ex) bool(데이터타입) is_allive(변수명) = false;(또는 true), 5 > 3; 을 넣으면 1이 출력,\.
	비교연산자의 데이터 값이 올 수 있다.

	배열 (자료구조)
	같은 데이터타입의 여러 변수를 하나의 묶음으로 나타낸 것.

	배열의 데이터타입에 대한 동일한 크기로 메모리상에 연속된 공간이 할당된다.
	배열명이 메모리 시작 주소이다.

	int : 4byte, double : 8byte . . . 

	int nums[10]; 

	2차원배열 및 다차원배열
	배열이 개념적으로 2중으로, 다중으로 구성되어 있는 것.

	1차원 배열 : int student_names[5];			// 5개의 int
			-> 5명의 학생이 있다.
	2차원 배열 : int student_nums[3][5];		// 15개의 int
			-> 3개 반에 각각 5명의 학생이 있다. 
	3차원 배열 : int student_nums[4][3][5];		// 60개의 int
			-> 4개 학년에 각각 3개 반이 존재, 각 반에 5명의 학생이 있다.

	( 엔터 없이 ) 문자 하나를 입력받는 방법
	_getch();

	형변환 : 데이터타입을 변환한다.
	묵시적 형변환(자동으로 형 변환 되는 것)
	명시적 형변환(형 변환을 문법을 사용하여 강제로 발생 시키는 것.) 예시)  "(int)"input_key_char << endl;


*/
/*
	실습1. string형 배열변수 5개짜리를 선언하고 
	반복문을 통해 학생의 이름을 입력받는다.

	입력을 다 받고나서 1 ~ 5 사이의 값을 입력하면 해당학생의 이름이 출력된다.

	예시)
		1번째 학생의 이름을 입력하세요 : 
		2번째 학생의 이름을 입력하세요 :
		3번째 학생의 이름을 입력하세요 :
		4번째 학생의 이름을 입력하세요 :
		5번째 학생의 이름을 입력하세요 :

		1 ~ 5사이의 번호를 입력하세요 : _
		3을 입력하면 << 3번째 학생의 이름은 ... 입니다.

	실습2. 
	구구단의 결과를 저장하는 2차원 배열을 하나 선언하고,

	이중 for문을 이용해서 배열 변수에 구구단의 결과값을 저장하고,

	두 수를 입력받아서 적합한 결과값을 출력해보자.

	예시)
		(결과 저장 완료)
		몇 단을 볼까요? : _4(입력)
		몇을 곱할까요? : _7(입력)

		4 * 7 = 28

	실습3.
	A ~ Z 키 중에 하나를 정답으로 설정한다.
	유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
	유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료
	틀리면 남은 기회를 보여주고, 
	5번 틀리면 정답을 알려주고 게임오버

	+ 틀릴 때 마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지, 힌트를 준다.
	+ 입력된 값이 대소문자 구분없이 처리될 수 있도록 수정해보자.

	콘솔용 탈출게임
	1. 10 * 10 크기의 맵을 구성한다.(2차원 배열)
	2. 플레이어(0, 0)가 존재한다.
	3. 탈출지점이 존재한다.
	4. WASD 키입력을 통해 플레이어를 이동시킨다.
	5. 탈출지점은 (0, 0)을 제외하고 랜덤 설정
	0가 E에 도달하면 "탈출에 성공했습니다." 프로그램이 종료

	system("cls");

	#0########
	##########
	##########
	##########
	##########
	##########
	##########
	######E###
	##########
	##########
*/



#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>


using namespace std;


int main()
{


	//int input_key = _getch();
	//char 형은 문자를 다루기 위해 사용한다.
	//char input_key_char = _getch();
	//cout << (int)input_key_char << endl;

	//float test_float = 5.4f;

	/*
	int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		cout << &(nums[1]) << endl;
	}
*/

/*
	int student_names[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15} };

	//cout << student_names[0][5] << endl; // [1][0]

	//순서대로 출력하는 코드 (2중 for문)

	for (int j = 0; j< 3; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << student_names[j][i] << endl;
		}

	}
*/
//구구단 실습
/*
	int gugudan[8][9];
	int f_num = 0;
	int l_num = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			gugudan[i][j] = (i+2) * (j+1);
		}
	}

	cout << " 첫번째 수 : " << endl;
		cin >> f_num;
	cout << " 두번째 수 : " << endl;
		cin >> l_num;

	cout << gugudan[f_num-2][l_num-1] << endl;
}
*/
//학생 이름 나오기 실습
/*
	string name[5];
	int i = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " 번째 학생의 이름을 입력하세요. : " << endl;
		cin >> name[i];
	}
	cout << " 1 ~ 5사이 번호를 입력하세요. " << endl;

	cin >> i;

	cout << i << " 번째 학생은 " << name[i-1] << " 입니다. " << endl;

*/
// 구구단 for 이중문 다시 정리 하기 //
/*
	int gugu_db[8][9];
	int input_dan;
	int input_su;

	for (int j = 0; j < 8; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			gugu_db[j][i] = (j + 2) * (i + 1);
		}
	}
	//	for (int j = 0; j < 8; j++)
	//	{
	//		for (int i = 0; i < 9; i++)
	//		{
	//			cout << gugu_db[j][i] << "\t";
	//		}
	//		cout << endl;
	//	}

	cout << "(결과 저장 완료)" << endl;

	cout << " 몇 단을 볼까요? : ";
	cin >> input_dan;				//4

	cout << " 몇을 곱할까요? : ";
	cin >> input_su;				//7

	cout << input_dan << " x " << input_su << " = " << gugu_db[input_dan - 2][input_su - 1] << endl;
*/

// 알파벳 게임 만들기
/*
	int count = 5;
	int input_key = 0;
	srand(time(NULL));
	int correct_num = rand() % 25 + 97;

	cout << "정답 :" << correct_num << endl;

	do
	{
		cout << " 답을 입력해 주세요. : " << endl;
		int input_key = _getch();

		int key2 = key;

		if(key2<)




	}
	while ();



	int player = 0;
//	srand(time(NULL));
//	int escape_p = rand() % 
	
	do
	{
		
	}

	*/
	

int press_key = 0;
srand(time(NULL));
int escape_p; << rand()10 + 10;
int player = 0;

		cout << "\n\n\n\n";
		cout << "#####  #####    ###      ######    ######### \n";
		cout << "#        #     #   #     #     #       # \n";
		cout << "#####	#    #######    ######        # \n";
		cout << "   #     #   #       #   #     #       # \n";
		cout << "#####    #  #         #  #      #      # \n";

		cin >> press_key;

			system("cls");

			for (int i = 1; i < 10; i++)
			{
				for (int j = 1; j < 10; j++)
				{
					cout << "*";
				}
				cout << "\n";
			}


			do
			{
				int game_key = _getch();

				if (game_key == 97)
				{
					
				}
				
			}
			while

	
			 

}

