#pragma once

#include <stdbool.h>

bool Renderer_Init(void); //�ֿܼ� �°Բ� ������۸��� ������Ѵ�.
void Renderer_Cleanup(void);
void Renderer_Flip(void); //backspace�� ȭ����ȯ
void Renderer_Clear(void); //ȭ���� ����� ����
void Renderer_DrawText(const char* text, int numberOfText);
