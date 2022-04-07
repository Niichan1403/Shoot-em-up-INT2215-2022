#pragma once

typedef struct {
	SDL_Renderer* renderer;
	SDL_Window* window;
	int up;
	int down;
	int left;
	int right;
} App;

typedef struct {
	int x;
	int y;
	SDL_Texture* texture;
} Entity;
