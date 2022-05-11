#pragma once

#include <stdbool.h>

bool App_Init(void);

int App_Run(void);

void Game_Process_input(void);

void Game_Update(void);

void Game_Render(void);
