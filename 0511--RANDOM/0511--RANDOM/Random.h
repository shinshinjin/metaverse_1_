#pragma once

#include "Type.h"

// ���� �ʱ�ȭ
bool Random_Init();

/// <summary>
/// ������ ������ �����´�.
/// </summary>
/// <param name="minInclusive">�ּڰ�</param>
/// <param name="maxExclusive">�ִ�</param>
/// <returns>[minInclusive, maxExclusive) ������ ������ ����</returns>
int32 Random_GetNumberFromRange(int32 minInclusive, int32 maxInclusive);

/// <summary>
/// ������ �Ǽ��� �����´�.
/// </summary>
/// <param name="minInclusive">�ּڰ�</param>
/// <param name="maxInclusive">�ִ�</param>
/// <returns>[minInclusive, maxExclusive] ������ ������ �Ǽ�</returns>
float Random_GetFNumberFromRange(float minInclusive, float maxInclusive);

int32 RANDOM_RUN();