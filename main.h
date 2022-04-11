#pragma once

#include "common.h"

extern void blit(SDL_Texture* texture, int x, int y);
extern void cleanup(void);
extern void doInput(void);
extern void initSDL(void);
extern SDL_Texture* loadTexture(char* filename);
extern void prepareScene(void);
extern void presentScene(void);

App app;
Entity player;
Entity bullet;


