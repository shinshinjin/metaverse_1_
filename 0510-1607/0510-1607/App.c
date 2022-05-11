#include "App.h"
#include "Renderer.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

bool App_Init(void)
{
	if (false == Renderer_Init())
	{
		return false;
	}

	return true;
}

void Game_Process_input(void)
{

}

void Game_Update(void)
{

}

void Game_Render(void)
{
	Renderer_DrawText("�ξƸ���", sizeof("�ξƸ���"));

	// 1. ȭ�� ��ȯ�ϰ�
	Renderer_Flip();

	// 2. �� ������ ����(����ȭ��)�� �����ش�.
	Renderer_Clear();

	/*system("cls");
	puts("Hello");
	Sleep(1000);*/
}


int App_Run(void)
{
	// ���� ���� : �Է� ó�� -> ���� ������Ʈ -> ���� ��� 
	while (true)
	{
		Game_Process_input();
		Game_Update();
		Game_Render();
	}


}
