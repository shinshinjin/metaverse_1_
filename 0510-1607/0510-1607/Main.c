#include <stdio.h>
#include "App.h"

int main(void)
{
	// 1. ���α׷� �ʱ�ȭ
	if (false == App_Init())
	{
		puts("�̰� ������");
		return 1;
	}

	// 2. ���α׷� ����
	return App_Run();
}