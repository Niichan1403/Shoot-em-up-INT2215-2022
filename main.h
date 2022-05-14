#pragma once

#include "common.h"

extern void cleanup(void);
extern void doInput(void);
extern void initGame(void);
extern void initHighscores(void);
extern void initSDL(void);
extern void prepareScene(void);
extern void presentScene(void);

App app;
Highscores highscores;
Stage stage;

