#pragma once

#include <stdbool.h>

bool Renderer_Init(void); //콘솔에 맞게끔 더블버퍼링을 해줘야한다.
void Renderer_Cleanup(void);
void Renderer_Flip(void); //backspace로 화면전환
void Renderer_Clear(void); //화면을 지우는 역할
void Renderer_DrawText(const char* text, int numberOfText);
