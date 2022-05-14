#pragma once

#include "common.h"

extern void doBackground(void);
extern void doStarfield(void);
extern void drawBackground(void);
extern void drawStarfield(void);
extern void drawText(int x, int y, int r, int g, int b, int align, char *format, ...);
extern void initStage(void);

extern App app;
extern Highscores highscores;