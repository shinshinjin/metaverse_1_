#1 원격 명령어
> - git fetch <remote> <place>
> - git push <remote> <place>
> - <source:destination>


#2 기타 명령어
Unix
> - cd : Change Directory
> - mkdir : Make Directory
> - touch : Make a file
> - vi
	> - i를 누르면 편집모드
	> - :wq로 write & quit
	> - ESC키를 누르면 명령어 입력 모드
> - git init : Initialize repository
> - git log : Show history
> - git status : Show current status of current repository
> - git add : Make files to staging area
> - config : Configure repository
> - restore : Delete a version or Unstage files


. Git 내부 동작
- HEAD : 커밋이나 브랜치에 대한 내용이 담겨 있음
- ref/heads : 브랜치에 보관 디렉토리
- ref/tags : 태그 관련 디렉토리 
- 브랜치와 태그에는 커밋의 해시값이 들어 있다.
- objects : 버전 관련 디렉토리 
- 
git remote add origin 하고 git remote 라고 치면 원격저장소 명이 나옴

git push --set-upstram origin main
하면 창이 나오는데

personal access token 에서 
github 로그인에 settings 들어가면 developer settings 가 있다.
personal access tokens 에서 발급 가능.
들어가면 Generate new token(1회용 접근 티켓) - 
Note: 식별할수 있는 이름 설정.(ex. KIA_METAVERSe)

Expiration(유효기간) - 30days(기본값) - 만료기간 나옴

아래부분은 권한과 관련된 내용
repo(check)

그리고 generate token button click

그리고 파란색창같은거 누르면 복사되는데
아까 push 해서 나온창에 붙여넣기하면
git bash에서 실행 됨

확인: 레포지토리 확인해보면 들어있음.

( rm -rf ./(폴더) = 삭제 , cd 폴더/ - 그 폴더 경로로 들어감)

<만약에 git bash 에서 push 오류가 뜬다면>
windows 자격 증명 - 권한이 거부가 된 것이므로 
ㄴ 에서 제거하면 해결 됨

다시 git bash로 돌아가서,

git adog 하면 origin/<branch 명> 이 있음

git remote add <name> (github)
git remote  = 하면 name이 나옴
git push --set-upsteram github main = 하면 또 뜸

git remote remove <name> 하고 github 사이트에서
danger 어쩌고에서 삭제 가능

help people interested ...READ ME = Add a read me 
= 해당 프로젝트를 보여주는 용도로 사용
= read.me를 어떻게 구조적으로 잘 쓸 수 있는가 - 강의자료에 있음






github에서 push를 한 repository에서,
Unwatch - 현재 보는사람 수
fork - 레포지토리를 복제하는 것
star - 좋아요

github 사이트에 설명이나 글같은 것들 있음.


