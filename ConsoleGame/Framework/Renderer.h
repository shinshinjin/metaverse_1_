#pragma once

#include "Type.h"
#include "Text.h"

/// <summary>
/// �������� �ʱ�ȭ�Ѵ�.
/// </summary>
/// <returns>�ʱ�ȭ �����ϸ� true, �ƴϸ� false</returns>
bool	Renderer_Init(void);

/// <summary>
/// �������� �����Ѵ�.
/// </summary>
void	Renderer_Cleanup(void);

/// <summary>
/// ȭ���� �ٲ۴�.
/// </summary>
void	Renderer_Flip(void);

/// <summary>
/// �ؽ�Ʈ�� ����Ѵ�.
/// </summary>
/// <param name="text">�ؽ�Ʈ</param>
/// <param name="numberOfChar">����� ������ ����</param>
/// <param name="x">����� ��ġ</param>
/// <param name="y">����� ��ġ</param>
void	Renderer_DrawText(const Text* text, int32 numberOfChar, int32 x, int32 y);

