#include <stdio.h>
#include "App.h"

int main(void)
{
	// 1. 프로그램 초기화
	if (false == App_Init())
	{
		puts("이거 메인임");
		return 1;
	}

	// 2. 프로그램 실행
	return App_Run();
}