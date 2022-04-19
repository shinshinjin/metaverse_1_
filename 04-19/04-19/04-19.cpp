@@ - 0, 0 + 1, 146 @@
﻿

1. Version Control System
2. Computer Science Theory
3. Procedura1 Programming with C(C언어 활용)
4. Basic Game Programming

-> 2~3week


6. Data Structure(자료구조)
7. Object Oriented Programming(객체지향 프로그래밍)
8. C#
9. Unity

or

6. Obeject Oriented Programming
7. C++ (OOP / Template)
8. Data Structure
9. C#
10.	Unity

한권으로 읽는 컴퓨터 구조와 프로그래밍 = 책 추천

// 버전 관리 시스템
파일의 변화를 기록 하여 추후 특정 버전으로 불러올 수 있는 시스템을 말한다.
로컬 / 중앙집중형 / 분산형으로 나눌 수 있다.
이중 Git 은 분산형에 속한다.

// Git
1. 스냅샷 = 관리방법
2. 세 가지 상태
1. Committed : 데이터가 로컬 데이터베이스에 안전하게 저장됐다는 것
2. Modified : 수정한 파일을 아직 로컬 데이터베이스에 Committed 하지 않은 것
3. Staged : 현재 수정한 파일을 곧 커밋할 것이라고 표시한 상태

- 1. 특정 버전을 체크아웃
  2. 파일수정
  3. 스테이징하고 커밋


.git folder = 리포지토리 = 삭제하면 큰일남

git checkout - b bugFix

- f = 강제

git branch - 1 main HEAD~2

revert = 건너뛰고 밑에 하나를 더 생성
reset = 현재것 없애기

git cherry - pick

git cherry - pick <Comit1><Commit2><...>

인터렉티브 리베이스

git rebase - i HEAD~4
git rebase A B = A밑에 B를 불러온다.


git rebase - i		: 명령으로 우리가 바꿀 커밋을 최근 순서로
git commit --amend : 명령으로 커밋내용 정정
git rebase - I : 이 전의 커밋 순서로 되돌련호음

git tag v1(태그의 이름) C1(C1에 태그 만들기)

git describe <ref>
ref : commit 을 의미하는 아무거나. (특정 짓지 않으면 HEAD를 사용)

git checkout HEAD~^ 2~

git checkout o / main
git commit
git fetch
git merge
git pull
git fakeTeamwork
git fakeTeamwork A(이름) 3(숫자)
git push
git pull --rebase

feature 라는 이름의 다른 브랜치를 만들어 원격 저장소에 push 하세요.
그리고 원격 저장소와 동기화될 수 있도록 로컬 저장소의 main 브랜치를 reset하세요.git


명령어 종류
1. git commit
2. git branch
3. git rebase
4. git branch - f(A) (B) - A에서 B로
5. git reset
6. git revert
7. git cherry - pick(A) (B) - HEAD 에서 입력한 순서로 내려오면서 생성
8.

1. 원격 저장소를 만드는 명령어 - git clone
2. 원격 브랜치 : 원격 저장소를 추적하는 특수한 브랜치
3. git fetch : 원격 저장소의 내용을 로컬에도 동기화
 > 1. 로컬에 없는 커밋을 다운로드
 > 2. 원격 브랜치를 업데이트
 > 3. git pull : git fetch->git merge

	#1. 버전 관리 시스템
	- 버전 관리 : 파일의 변화를 기록하는 것
	- 로컬 / 중앙집중형 / 분산형
	> 로컬 : 내 컴퓨터에서만 버전 관리
	> 중앙집중형 : 서버에서만 버전 관리
	> 분산형 : 내 컴퓨터 + 서버에서 버전 관리
	- Git은 분산형 버전 관리 시스템이다.
	(Distributed Verson Control System)

	#2. Git
	- Git은 스냅샷을 이용해서 버전 관리함.
	- Commited / Modified / Staged
	> Committed : 버전 관리를 한 상태
	> Modified : 수정이 일어난 상태
	> Staged : 커밋하겠다고 한 상태

	#3. 명령어
	- git commit : 커밋하는 것
	- git branch : 브랜치를 만드는 것
	> 브랜치 : 특정 커밋에 대한 참조
	> -f : 브랜치를 강제로 옮기는것
	- git checkout : 특정 버전(커밋)을 불러오는 것
	> -b : 브랜치를 만들고 체크아웃
	- git merge : 서로 다른 두 개의 커밋을 합쳐서 새로운 커밋을 생성
	> -i : 인터랙티브 리베이스 (리베이스 상호작용)
	- git rebase : 커밋을 복사해 다른 커밋으로 붙여넣는 것
	- git cherry - pick : 원하는 커밋을 복사해 붙여넣는 것
	- git reset : 이전으로 되돌아 가는 것
	- git revert : 특정 커밋의 반대되는 새로운 커밋을 만드는 것
	- 상대 참조(Relative Reference)
	> HEAD : 현재 작업 중인 버전
	> ^ (캐럿) : 특정 커밋의 부모
		> 2 : 두 번째 부모
	> ~(틸드) : 특정 커밋으로 부터 어떤 수만큼 떨어진 부모
	- git tag : 특정 커밋에다가 어떤 내용을 남기는 것
	- git clone : 원격 저장소를 로컬로 복제하는 것
	- git fetch : 원격 저장소의 내용을 로컬로 가져오는 것
	> 1. 로컬에 없는 커밋을 다운로드
	> 2. 원격 브랜치를 업데이트
	> 원격 브랜치 : 원격 저장소의 브랜치를 추적
	- git pull : git fetch + git merge
	- git push : 로컬 저장소의 내용을 원격으로 보내는 것
	> 1. 원격에 없는 커밋을 업로드
	> 2. 우너격 브랜치를 업데이트

	이득우의 게임수학

	origin/main, origin/side, origin/feature

	
	defaul branch : main, master

	Committed / Modified / Staged
	- Git으로 작업할 때 엄청나게 관련이 있기 때문에

#1 원격 명령어
- git pus / pull / fetch <remote> <place>

<place> : 브랜치 이름

colon(콜론)refspec(참조스펙)으로 source:destination(소스를 목적지로 지정)

git bash

#2
- git config : 설정
- git add : 스테이징 영역 추가
- git restore : 스테이징(수정)된 파일을 되돌리는 것 = 변경사항 폐기
- git log : 그래프를 보여줌
- git status : 레포지토리 상태를 확인 

