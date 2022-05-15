#pragma once

#include "common.h"

extern void blitRect(SDL_Texture *texture, SDL_Rect *src, int x, int y);
extern void doBackground(void);
extern void doStarfield(void);
extern void drawBackground(void);
extern void drawStarfield(void);
extern void drawText(int x, int y, int r, int g, int b, int align, char* format, ...);
extern void initHighscores(void);
extern void initStage(void);
extern SDL_Texture* loadTexture(char *filename);

extern App app;

