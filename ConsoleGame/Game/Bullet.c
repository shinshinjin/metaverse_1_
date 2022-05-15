#include "Bullet.h"
#include "Gun.h"
#include "Player.h"

#include "Framework/Renderer.h"
#include "Framework/Timer.h"
#include "Framework/Input.h"

void Bullet_Init(Bullet* bullet, struct tagGun* gun)
{
	SetCoord(bullet->Coord, 0, 0);
	bullet->ElapsedTimeForMove = 0.0f;
	bullet->IsActive = false;
	bullet->ActiveTime = 3.0f;
	bullet->Gun = gun;

	if (Input_GetKeyDown(0x32))
	{
		TextCopy(&bullet->Text, L"��", TEXT_COLOR_RED | TEXT_COLOR_STRONG);
	}

	else
	{
		TextCopy(&bullet->Text, L"��", TEXT_COLOR_GREEN | TEXT_COLOR_STRONG);
	}

	//bullet->Speed = 100.0f;
}


void Bullet_Update(Bullet* bullet)
{
	if (false == bullet->IsActive)
	{
		return;
	}

	//bullet->Coord.X += bullet->Speed * Timer_GetDeltaTime();
	
	bullet->ElapsedTimeForMove += Timer_GetDeltaTime();
	if (bullet->ElapsedTimeForMove >= 0.05f)
	{
		bullet->ElapsedTimeForMove = 0.0f;

		++bullet->Coord.X;
	}

	bullet->ActiveTime += Timer_GetDeltaTime();
	if (bullet->ActiveTime >= 3.0f)
	{
		bullet->ActiveTime = 0.0f;
		bullet->IsActive = false;
		--bullet->Gun->BulletCount;
	}
}

void Bullet_Render(Bullet* bullet)
{
	if (false == bullet->IsActive)
	{
		return;
	}

	Text* text = &bullet->Text;
	Renderer_DrawText(text, 1, bullet->Coord.X, bullet->Coord.Y);
}

void Bullet_Release(Bullet* bullet)
{

}

void Bullet_Spawn(Bullet* bullet, int32 x, int32 y)
{
	bullet->IsActive = true;
	bullet->Coord.X = x;
	bullet->Coord.Y = y;
}