#include <iostream>
#include <string>	
using namespace std;

struct score
{
	int kor;
	int eng;
	int math;
};

struct student
{
	string name; // 클래스도 쓸 수 있고
	int age; // 기본자료형도 쓸 수 있고
	string hometown;
	int rank;
	string bloodType;
	int monthlyScore[12]; // 배열도 넣을 수 있고
	score myScore; // 구조체도 쓸 수 있다.

}seoyeon,jaehyuk; //중괄호의 끝과 세미클론 사이에다 student의 변수를 미리 선언 해 줄수도 있다.

//namne, age, korScore, rank 라는 하위 변수를 가지고 있는 student 라는 구조체를 정의한다.

//여기에 구조체를 정의한다. (int main() 전에)

//0415_구조체
/*
	1. 절차적
	2. 구조적
	3. 객체지향적
	### 추상화 ###
	C언어에서 코드를 추상화하는 데 사용되는 삼총사 : 배열, 구조체, 함수
	추상화 : 실제 세계( 현상 )을 간략화/기호화/보편화 해서 표현한 것.
	코드에서 추상화가 필요한 이유 : 결국 코드는 사람이 짜는 것이기 때문에
	because 다른 사람이 코드를 해석하기 편리해야 하고 
		    다른 사람이 인수인계받아서 유지보수하기 편리해야 하고
		    다른 사람들과 함께 공동으로 코드를 만들기 편리해야 하고

	배열 : 속성이 동일한 여러 개의 데이터를 같은 이름과 순서를 지정한 연속된 번호로
	서로 연관되어 있음을 표시함으로써 추상화함
	- 구조체 : 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화 한다.
	- 함수 : 프로세스(코드)를 특정 기능 단위로 묶어서 추상화 한다.
	최악의 추상화 단계 -> 추상화 단계를 상승시키는 과정

	예시)
	string a,b,c; //<- 최악의 추상화
<	string a[3]; //<- 위의 것보다는 좀 낫다
=	string name1, name2, name3; // <- 아니면 이런 식으로 든지
<	string studentName[3]; // 위의 것보다 의도가 명료하게 드러나기 때문에 좋은 추상화다.
	
	구조체란?
	- 변수를 모아놓은 집합체
	- 특정 변수들이 무언가의 하위 개념으로 묶일 수 있을 때 (이런 상황에서 구조체를 사용한다.)
	- 이름, 나이, 국어점수, 석차 등등을 "학생" 이라는 구조체로 묶어서 사용

	예시) studentNamep[10], studentAge[10], studentKorScore[10] ....
	: 공통점 = "student"의 "XXX"
	
	1. 구조체를 정의하는 위치 : 구조체가 사용되는 함수의 앞에 정의한다.
	(해당 함수의 바깥쪽 앞(위	))

	2. 구조체 정의의 방법
	struct 구조체 변수명
	{
		구조체 안에 들어갈 하위 변수
		위의 예시에 따르면 이름, 나이, 국어점수, 석차 는 하위개념이다.
	};
	
	구조체는 일종의 우리가 새롭게 만든 데이터형이다.

	//초간단실습 : student 구조체를 사용해서 자기 자신의 정보를 입력하고 확인해보자.

	구조체 안에 들어갈 수 있는 하위변수는 무엇이 있을까?
	= int, bool, float 등 기본 자료형들은 모두 사용 가능하다.
	string <- 클래스도 쓸 수 있고

	3. 구조체 선언과 초기화
	기본적으로 구조체 변수의 개념은 배열 변수의 개념과 동일
	int a[3] = {50,70,90};
	구조체 변수도 다음과 같이 선언과 동시에 초기화할 수 있다.

	player.HP = player.HP - monster[n].dmg;
	<- 주석 없이 코드를 배우지 않은 사람에게도 어느 정도의 가독성이 확보된다.

	// 과제 : 미궁탈출 게임의 업데이트
	1. 사용할 수 있는 모든 요소에 구조체를 활용해서 소스 코드를 개선해 보세요.
	2. 맵 위치(tile) : 지형 정보를 넣고( 숲, 늪, 평지 )
	3. player : 피로도를 넣고
	4. 플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마인지 ( 숲 = -1, 늪 = -3, 평지 = 0 )
	5. 표시되도록 수정해 봅시다.

*/

int main() // 이 명령어가 지금 우리가 쓰고 있는 유일한 함수
{
	//초간단실습

/*
	student hyukjin; //구조체 변수의 선언
	hyukjin.name = "신혁진"; //minSeop의 name은 "신민섭" 이다.
	hyukjin.age = 26; //minSeop의 age는 34 이다.
	hyukjin.hometown = "울산"; //minSeop의 korScore는 99이다.
	hyukjin.bloodType = " A "; //minSeop의 rank는 1이다.
	hyukjin.myScore.eng = 80;
	hyukjin.monthlyScore[0] = 90;
	hyukjin.monthlyScore[1] = 95;
	seoyeon.name = "최서연";
	score myScore = { 50,80,90 }; // 배열을 초기화 하듯 구조체 변수도 초기화 할 수 있다.
	// monster a = {"고블린", 79, 55.12f, true, 100 };
	
	cout << myScore.kor << myScore.eng << myScore.math << endl;

	cout << " 제 이름은 " <<	hyukjin.name << " 입니다. " << endl;
	cout << " 제 나이는 " << hyukjin.age << " 살 입니다. " << endl;
	cout << " 제 고향은 " << hyukjin.hometown << " 입니다. " << endl;
	cout << " 제 혈액형은 " << hyukjin.bloodType << " 형 입니다. " << endl;

	cout << hyukjin.name << hyukjin.myScore.eng << hyukjin.monthlyScore[0] << endl;
	
*/

}