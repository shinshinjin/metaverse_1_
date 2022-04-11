/*#include <iostream>

int main() 
{
	std::cout << "Hello World!\n";
}*/

/*#include <iostream>
#include <string>

int main()
{
	int Input_key = 10;
	float testFloat = 5.3f;
	float testFloat2 = 5.3;
	char testCharacter = 'a';
	std::string testString = "Hello";

	std::cout << "HelloWorld!\n";
	std::cin >> Input_key;


}*/
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::cout << "Hello World!\n";
	string name = "신혁진";
	int age = 26;
	float weight = 68.5;
	float height = 175;
	string favorite = "Sleeping";


		cout << " 이름 : " << name << endl;
		cout << " 나이 : " << age << endl;
		cout << " 몸무게 : " << weight << endl;
		cout << " 키 : " << height << endl;
		cout << " 좋아하는 것 : " << favorite << endl;

}
/* 변수명 이름 짓기 규칙 (표기법)
1. 헝가리안 표기법 
- 데이터타입 약자를 접두어로 붙인다.
 int nMaxCount = 10;
2. 카멜 표기법
 int maxCount = 10;
3. 파스칼 표기법
int TokenMaxCount = 10;

int token_max_count = 10; (구글에서 지정해 줌)

int nn = 10;
int cmprs = 20; (X)

  1. 대소문자를 구분한다.
  2. 알파벳; 숫자; _(언더바)만 사용한다.
   2-1. 숫자는 가장 앞에 올 수 없다.

   변수의 4가지 속성이 있다.
   1) 이름 : Input_key  2) 크기 : 4byte(data type)  3) 값 10 4) 메모리주소 0000002DAB8FF4C4

   연산자
   데이터를 가공(연산)하는 모든 명령에 필요한 것들
   1) 어떤 종류의 연산자인가
   2) 우선순위 : 어떤 순서로 연산이 되는가
   3) 결합순서 : 좌측부터 연산하는가, 우측부터 연산하는가

   1. 사칙연산 : 산술연산자 (좌측부터 연산된다)
   + : 더하기
   - : 빼기
   * : 곱하기
   / : 나누기 11 / 3 -> 3 (몫)
   % : 나머지 11 % 3 -> 2 (나머지)

   우선순위 : *, /, %,  > +, -

   2. 대입연산자 (우측부터 연산된다)
   = : 왼쪽 항에 오른쪽 항의 값을 대입(복사)한다.

   3. 복합대입연산자
   += : a += b; -> a = a + b; 
   -= : a -= b; -> a = a - b;
   *= : a *= b; -> a = a * b;
   /= : a /= b; -> a = a / b; (b == 0, 런타임에러 발생)
   %= : a %= b; -> a = a % b; (a와 b가 데이터타입이 정수형이 아닐 때)(정수와 정수끼리만 계산해야 함)

   4. 증감연산자
   특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용하는 연산자.
   변수형 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

   5. 관계연산자
   두 항의 값을 비교한 결과가 참(1, true) 또는, 거짓(0, false)으로 반환되는 연산자

   a < b 
   a > b
   a <= b
   a >= b
   a == b
   a != b

   6. 논리연산자
   왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서 
   두 값을 비교해서 참과 거짓을 반환하는 연산자

   && : 논리곱(AND)
   a && b : a의 결과값이 참이고 b의 결과값이 참이면 1을 반환

   || : 논리합(OR)
   a || b : a의 결과값이 참이거나 b의 결과값이 참이면 1을 반환

   ! : 논리부정
   !a : a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환
   
   7. 상향 연산자
   a ? b : c;
 a의 결과 값이 참이면 b 실행문이 동작, 거짓이면 c 실행문이 동작

 난수 (랜덤값)
 rand(); << 난수함수
 0 ~ 32767 사이의 랜덤한 값이 반환된다. (2바이트)
  함수 내부에 seed 값이 있어서 이 값에 의해서 리턴값이 정해진다.
   기본적으로 seed : 1로 세팅되어 있다.
    srand() << 함수로 시드값을 바꿈
	ex : srand(time(NULL)); << 시간을 넣어서 시드값을 바꿈

   실습 1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자.
   (3, 7포함)
   
   실습 2. 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.

   실습 3. 프로그램을 실행하면 내부적으로 1 ~ 9 사이의 숫자가 정답으로 정해진다. 
   유저가 1 ~ 9 사이의 숫자를 입력하면 맞으면 true, 틀리면 false 를 출력한다.

*/
/*
#include <iostream>
#include <string>

int main()
{
	std::cout << ((10 < 5) == 0)<< std::endl; // 0

	int input_key = 10;
	std::cout << input_key++ << std::endl; // 10
	std::cout << ++input_key << std::endl; // 12
	std::cout << input_key-- << std::endl; // 12
	std::cout << --input_key << std::endl; // 10

	float testfloat = 5.3f;
	float testfloat2 = 5.3;
	char testCharacter = 'a';
	std::string testString = "Hello";
}
*/

/*#include <iostream>
#include <cstdlib>
#include <ctime>

void main()
{

	srand((unsigned int)time(NULL)); 

	printf("랜덤숫자 : %d\n", rand() % 10 );
	 

}
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand((unsigned int)time(NULL));

	cout << "랜덤숫자 : " << rand() % 5 + 3 ;


}
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
/*
{
	int a = 0 ;
	int b = 0 ;

	std::cin >>a;
	std::cin >>b;

	srand(()time(NULL));

	cout << " rand : " << rand() % (a-b-1) + b;

}
*/
{
	int a = 0;
	int b = 0;

	srand(time(NULL));

	a = rand() % 9 + 1;
	cout << " b입력 : ";
	cin >> b;
	(a == b) ? cout << "true" << endl : cout << "false" << endl;
}

