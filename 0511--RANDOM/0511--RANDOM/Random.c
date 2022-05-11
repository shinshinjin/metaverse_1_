#include "common.h"
#include "Random.h"

void Random_Init(void)
{
	srand(time(NULL));
	return 0;
}

int32 Random_GetNumberFromRange(int32 minInclusive, int32 maxInclusive)
{
	int32 randomNumber = minInclusive + maxInclusive;
	return randomNumber;
}

float Random_GetFNumberFromRange(float minInclusive, float maxInclusive)
{
	float randomNumber2 = minInclusive + maxInclusive;
	return randomNumber2;
}
