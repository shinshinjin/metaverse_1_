#include "BulletTwo.h"
#include "Game/Gun.h"

#include "Framework/Renderer.h"
#include "Framework/Timer.h"

void Bullet_Init_Two(Bullet_Two* bullet_Two, struct tagGun* gun)
{
	SetCoord(bullet_Two->Coord, 0, 0);
	bullet_Two->ElapsedTimeForMove = 0.0f;
	bullet_Two->IsActive = false;
	bullet_Two->ActiveTime = 3.0f;
	TextCopy(&bullet_Two->Text, L"¡Û", TEXT_COLOR_RED | TEXT_COLOR_STRONG);
	bullet_Two->Gun = gun;
	//bullet->Speed = 100.0f;
}


void Bullet_Update_Two(Bullet_Two* bullet_Two)
{
	if (false == bullet_Two->IsActive)
	{
		return;
	}

	//bullet->Coord.X += bullet->Speed * Timer_GetDeltaTime();

	bullet_Two->ElapsedTimeForMove += Timer_GetDeltaTime();
	if (bullet_Two->ElapsedTimeForMove >= 0.05f)
	{
		bullet_Two->ElapsedTimeForMove = 0.0f;

		++bullet_Two->Coord.X;
	}

	bullet_Two->ActiveTime += Timer_GetDeltaTime();
	if (bullet_Two->ActiveTime >= 3.0f)
	{
		bullet_Two->ActiveTime = 0.0f;
		bullet_Two->IsActive = false;
		--bullet_Two->Gun->BulletCount;
	}
}

void Bullet_Render_Two(Bullet_Two* bullet_Two)
{
	if (false == bullet_Two->IsActive)
	{
		return;
	}

	Text* text = &bullet_Two->Text;
	Renderer_DrawText(text, 1, bullet_Two->Coord.X, bullet_Two->Coord.Y);
}

void Bullet_Release_Two(Bullet_Two* bullet)
{

}

void Bullet_Spawn_Two(Bullet_Two* bullet_Two, int32 x, int32 y)
{
	bullet_Two->IsActive = true;
	bullet_Two->Coord.X = x;
	bullet_Two->Coord.Y = y;
}