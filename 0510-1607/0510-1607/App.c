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
	Renderer_DrawText("로아망겜", sizeof("로아망겜"));

	// 1. 화면 전환하고
	Renderer_Flip();

	// 2. 백 버퍼의 내용(이전화면)을 지워준다.
	Renderer_Clear();

	/*system("cls");
	puts("Hello");
	Sleep(1000);*/
}


int App_Run(void)
{
	// 게임 루프 : 입력 처리 -> 게임 업데이트 -> 게임 출력 
	while (true)
	{
		Game_Process_input();
		Game_Update();
		Game_Render();
	}


}
