#pragma once

#include "common.h"

extern void cleanup(void);
extern void doInput(void);
extern void initFonts();
extern void initSDL(void);
extern void initSounds(void);
extern void initStage(void);
extern void prepareScene(void);
extern void presentScene(void);

App app;
Stage stage;

