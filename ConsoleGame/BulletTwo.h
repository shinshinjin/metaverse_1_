#pragma once

#include "Common.h"
#include "Framework/Text.h"

typedef struct tagBullet_Two
{
	bool	IsActive;
	COORD	Coord;
	float	ActiveTime;
	float	ElapsedTimeForMove;
	Text	Text;
	struct tagGun* Gun;
	struct tagGun2* Gun2;
	float	Speed;
} Bullet_Two;

void Bullet_Init_Two(Bullet_Two* Bullet_Two, struct tagGun* gun);
void Bullet_Update_Two(Bullet_Two* Bullet_Two);
void Bullet_Render_Two(Bullet_Two* Bullet_Two);
void Bullet_Release_Two(Bullet_Two* Bullet_Two);
void Bullet_Spawn_Two(Bullet_Two* Bullet_Two, int32 x, int32 y);
