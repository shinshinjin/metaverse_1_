// 220412_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//pragma 실습1
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{


	/*
		srand(time(NULL));

		cout << "rand " << rand() % 5 + 3;
	*/
	/*
		int a;
		int b;

		cin >> a;
		cin >> b;

		srand(time(NULL));

		cout << "랜덤값" << rand() % (a - b - 1) + b;

	*/
	/*
		int a = 0;
		int b = 0;

		srand((NULL));

		cout << (rand() % 9 + 1) << endl;

		cout << " 입력값 : ";

		cin >> b;

		(a == b) ? cout << "true" << endl : cout << "false" << endl;

	*/
	// 

	//	cout << "Hello World!\n" << endl;
		/*
		int rand_num;

		// 처리

		srand(time(NULL));

		rand_num = 3 + rand() % 5;

		// 출력
		cout << rand_num << endl;
		*/

		//실습 1)

		//입력 
		/*
			int  rand_num;
			int  input_min_number;
			int  input_max_number;
		*/
		/*	cout << "최소값" << endl;
			cin >> input_min_number;
			cout << "최대값" << endl;
			cin >> input_max_number;

		//처리
			rand_num = input_min_number + rand() % (input_max_number - input_min_number + 1);
		//출력
			cout << "랜덤값 : " << rand_num << endl;
		*/ //pragma region 실습3


		//입력
	/*	int input_quiz_number;

		cout << " 값을 입력 : " << endl;
		cin >> input_quiz_number;

		//처리
		int correct_number = 1 + rand() % 9;
		cout << " 정답 : " << correct_number << endl;

		//출력 : true , false
		(input_quiz_number == correct_number) ? cout << "true" << endl : cout << "false" << endl;
	*/

	// 제어문		데이터(타입) / 연산자 / <제어구조>
	/* 제어문		데이터(타입) / 연산자 / <제어구조>

		1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어 : if / switch
		2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어 : while / for

		조건문
		1_1. if 문

		if (조건식)
		{
			실행문1;
		}
		else if (조건식2)
		{
			실행문3;
		}
		else
		{
			실행문2;
		}

		조건문 실습1.
		정수를 하나 입력 받아서
		입력받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다." 출력
		10 이하 9초과 이면 "9보다 큽니다." 출력
		9 이하 6초과 이면 "6보다 큽니다." 출력
		그 이외에는 "6보다 작거나 같습니다." 출력

		1_2: switch 문

		switch (정수형 변수)
		{
			case 정수1:
				실행문1;
			break;
			case 정수2:
				실행문2;
			break;
			default:			// 해당하는 정수값이 없을 때
				실행문4;
			break;
		}

		switch문 실습 :
		당신의 고향은 어디입니까?
		1. 서울	2. 양평	3. 광주	4. 대전	5. 제주도
		_1

		안녕하세요, 당신의 고향은 서울이군요.
		안녕하수꽝, 혼저옵서예.
		5개 중에 선택해 주세요.

		2. 반복문
		2_1. while 문

		while (조건식)
		{
			실행문;
			조건식을 바꾸는 실행문; //while문을 중단시키는 첫번째 방법

			if (조건식)
			{
				breaks;	          //while문을 중단시키는 두번째 방법
			}

		}

		반복문 예제)
		// Hello world를 5번 출력하는 프로그램
		while (1)
		{
			cout << "Hello world" << endl;
		}

		do while문

		do
		{
			실행문;
		}
		while(조건식);

		// while 을 사용하여 숫자맞추기 게임을 정답을 맞출 때 까지 반복되는 프로그램으로 수정해보자.

		2_2. for문

		for ((1)초기식; (2)조건식; (3)증감식)
		{
			(4)실행문;
		}

		(1) -> (2) -> (4) //조건식이 참일 경우
		(1) -> (2) -> (3) -> (2) ... -> (4) // 조건식의 결과값이 0 이 나올 때 까지

		//for문 실습1.
		10부터 1까지 차례대로 출력되는 코드를 작성해 보자.
		10
		9
		8
		7
		...
		2
		1

		실습2.
		100미만의 3의 배수를 차례대로 출력되는 코드를 작성해 보자.
		3
		6
		9
		...
		96
		99

		실습3.
		1000미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자.
		1
		2
		4
		8실습4.
		구구단을 출력해보자.
		4_1. 구구단 2단을 차례대로 출력해보자.
		2 * 1 = 2
		2 * 2 = 4
		2 * 3 = 6
		2 * 4 = 8
		2 * 5 = 10
		2 * 6 = 12
		2 * 7 = 14
		2 * 8 = 16
		2 * 9 = 18

		4_2. 구구단 2단 ~ 9단을 차례대로 출력해보자.
		2단

		3단

		...

		9단

		4_3. 구구단 2단 ~ 9단을 다음과 같은 형태로 출력해 보자.
		2단 3단 4단

		5단 6단 7단

		8단 9단
		...
		512


		별찍기
		1)
		*
		**
		***
		****
		*****



	*/
	/*
	//입력 (조건문 연습1-1)
		cout << "숫자를 입력하세요 : ";
		int input_number;

		cin >> input_number;

	//처리
		if (input_number > 10)
		{
			cout << "입력된 숫자가 10보다 큽니다." << endl;
		}
		else if (input_number > 9)
		{
			cout << "입력된 숫자가 9보다 큽니다." << endl;
		}
		else if (input_number > 6)
		{
			cout << "입력된 숫자가 6보다 큽니다." << endl;
		}
		else
		{
			cout << "입력된 숫자가 6보다 작거나 같습니다." << endl;
		}
	//출력

	}
	*/
	/*
		//입력(조건문 연습 2-1)
		cout << "당신의 고향은 어디입니까?\n";
		cout << "1. 서울	2. 양평	3. 광주	4. 대전	5. 제주도 \n";
		int input_key;

		cin >> input_key;

		//처리
		switch (input_key)
		{
		case 1:
			cout << "안녕하세요, 당신의 고향은 서울이군요." << endl;
			break;
		case 2:
			cout << "안녕하세요, 당신의 고향은 양평이군요." << endl;
			break;
		case 3:
			cout << "안녕하세요, 당신의 고향은 광주군요." << endl;
			break;
		case 4:
			cout << "안녕하세요, 당신의 고향은 대전이군요." << endl;
			break;
		case 5:
			cout << "혼저옵서예." << endl;
			break;
		default:
			cout << " 5개 중에 선택해주세요." << endl;
			break;
		}

	}
	//출력
	*/
	/*
		//입력(조건문2-2)

		cout << "당신의 고향은 어디입니까?\n";
		cout << "1. 서울	2. 양평	3. 광주	4. 대전	5. 제주도 \n";
		int input_key;

		cin >> input_key;

		//처리

		if (input_key == 1)
		{
			cout << "안녕하세요, 당신의 고향은 서울이군요." << endl;
		}
		else if (input_key == 2)
		{
			cout << "안녕하세요, 당신의 고향은 양평이군요." << endl;
		}
		else if (input_key == 3)
		{
			cout << "안녕하세요, 당신의 고향은 광주군요." << endl;
		}
		else if (input_key == 4)
		{
			cout << "안녕하세요, 당신의 고향은 대전이군요." << endl;
		}
		else if (input_key == 5)
		{
			cout << "안녕하세요, 당신의 고향은 제주도군요." << endl;
		}
		else
		{
			cout << "5개 중에 선택하여 주세요." << endl;
		}
	}
	*/
	/*
//while + if 반복문

		int repeat_count = 0;

		while (1)
		{
			cout << "Hello world" << endl;
			repeat_count++;

			if (repeat_count >= 5)
			{
				break;
			}
		}
	}
//while 반복문
	*/
	/*
		int repeat_count = 0;

		while (repeat_count < 5)
		{
			cout << "Hello world" << endl;
			repeat_count++;
		}
	}
	*/
	//do while 반복문
	/*
		int repeat_count = 0;

		do
		{
			cout << "Hello world" << endl;
			repeat_count++;
		}
		while (repeat_count < 5 );
	}
	*//*

	//입력

	int input_num;
	int correct_num;
	int repeat_count = 0;


	cout << "숫자를 입력하세요 : " << endl;

	cin >> input_num;


	//문제 생성
	srand((NULL));
	correct_num = rand() % 9 + 1;

	cout << correct_num << endl;


	//반복문

	do
	{
		cin >> input_num;


	} while (input_num != correct_num);


	cout << "정답" << endl;
	//출력 }*/

	/*
		int correct_num = rand() % 9 + 1;
		cout << "미리보는 정답 : " << correct_num << endl;

		int input_quiz_num = -1;
		while (input_quiz_num != correct_num) //조건식을 수정한다.
		{
			// 입력
			cout << "숫자를 맞춰 보세요 : ";
			cin >> input_quiz_num;

			// 출력 : true or false
			(input_quiz_num == correct_num) ? cout << "true" << endl : cout << "false" << endl;



		}
	}
	*/
	/*
	int correct_num = rand() % 9 + 1;
	cout << "미리보는 정답 : " << correct_num << endl;

	while (1) //조건식을 수정한다.
	{
		// 입력
		int input_quiz_num;
		cin >> input_quiz_num;

		// 출력 : true or false
		(input_quiz_num == correct_num) ? cout << "true" << endl : cout << "false" << endl;

		//break 조건을 추가
		if (input_quiz_num == correct_num)
		{
			break;
		}
	}
	}
	*/
	/*
	for (int i = 0; i < 5; i += 2)
	{
		cout << "Hello World!" << endl;
	}

*/
//실습1. 
/*
	for (int i = 10; i > 0; i--)
	{
		cout << i << endl;
	}

}
*/
//실습2.
/*
	for (int i = 3; i < 100; i += 3 )
	{
		cout << i << endl;
	}
}
*/
//실습3.
/*
	for (int i = 1; i < 1000; i *= 2)
	{
		cout << i << endl;
	}
}
*/
/*
cout << "구구단 2단을 차례대로 출력해보자.\n" << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 2 x " << i << " = " << 2 * i << endl;
	}

	cout << endl;


	cout << "구구단 2단 ~ 9단을 차례대로 출력해보자.\n" << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 2 x " << i << " = " << 2 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 3 x " << i << " = " << 3 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 4 x " << i << " = " << 4 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 5 x " << i << " = " << 5 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 6 x " << i << " = " << 6 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 7 x " << i << " = " << 7 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 8 x " << i << " = " << 8 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 9 x " << i << " = " << 9 * i << endl;
	}

	cout << endl;

	cout << "구구단 2단 ~ 9단을 다음과 같은 형태로 출력해 보자." << endl;

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 2 x " << i << " = " << 2 * i << "\t" << " 3 x " << i << " = " << 3 * i << "\t" << " 4 x " << i << " = " << 4 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 5 x " << i << " = " << 5 * i << "\t" << " 6 x " << i << " = " << 6 * i << "\t" << " 7 x " << i << " = " << 7 * i << endl;
	}

	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << " 8 x " << i << " = " << 2 * i << "\t" << " 9 x " << i << " = " << 9 * i << endl;
	}
}
*/
/*
cout << "구구단" << endl << endl;

	for (int i = 2; i < 9; i += 3)
	{
		for (int j = 1; j < 10; j++)
		{
			for (int k = i; k < i + 3; k++)
			{
				if (k > 9)
				{
					break;
				}
				cout << k << "*" << j << "=" << k * j << "\t";

			}
			cout << endl;
		}
		cout << endl;
	}

}
*/
/* 과제.1

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";

		}	cout << "\n";

	}
*/
//과제.3
/*


	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j < 5 - i;j++)
		{
			cout << "*";
		}
		cout << "\n";

	}

}
*/
/*
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 5; j < i - 5; j--)
		{
			cout << "*";
		}

		cout << "\n";

	}

}
*/

// 1)
/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << endl;
*/
// 2)
/*
	for (int i = 1; i <= 5; i++)
	{
		for (int k = 5 - i; k > 0; k--)
			cout << " ";
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
*/
// 3)
/*
	for (int i = 6; i > 1; i--)
	{
		for (int j = 0; j < i-1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << endl;
*/
// 4)
/*
	for(int i = 1; i < 6; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 5; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
*/
// 5)
/*
	for(int i=0; i<5; i++)
	{
		for (int j = 3; j >= i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i + i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
*/
// 6)
/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 8; j >= i + i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
*/
// 7)
/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 3; j >= i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i + i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 8; j >= i + i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}
*/
// 다이아 연습
/*
	for (int i = 0; i < 4; i++)
	{
		for (int j = 5; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i + i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 8; j >= i + i; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
*/
// 삼각형 층수
/*
	cout << "삼각형의 층수를 입력하세요. : ";




	int input_key = 0;

	cin >> input_key;

	for (int i = 0; i < input_key; i++)
	{
		for (int j = 0; j < input_key; j++)
		{
			if (j < i)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}
	cout << endl;

	cout << " 삼각형의 층수 :" << input_key; " 층 ";

	cout << endl;


	for (int i = 0; i < input_key; i++)
	{
		for (int j = input_key; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i + i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << " 삼각형의 층수 :" << input_key; " 층 ";

	cout << "\n";

	cout << "\n";

*/
// 백준 모래시계 문제
/*
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 8; j >= i + i; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 3; j >= i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i + i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}	
*/

}
