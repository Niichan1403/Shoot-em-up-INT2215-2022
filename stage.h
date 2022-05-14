#pragma once

#include "common.h"

extern void addHighscore(int score);
extern void blit(SDL_Texture* texture, int x, int y);
extern void blitRect(SDL_Texture* texture,SDL_Rect* src, int x, int y);
extern void calcSlope(int x1, int y1, int x2, int y2, float *dx, float *dy);
extern int collision(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2);
extern void doBackground(void);
extern void doStarfield(void);
extern void drawBackground(void);
extern void drawStarfield(void);
extern void drawText(int x, int y, int r, int g, int b, int align, char* format, ...);
extern void initHighscores(void);
extern SDL_Texture* loadTexture(char* filename);
extern void playSound(int id, int channel);

extern App app;
extern Highscores highscores;
extern Stage stage;

