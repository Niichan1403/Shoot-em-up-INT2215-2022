#pragma once

typedef struct {
	SDL_Renderer* renderer;
	SDL_Window* window;
} App;

typedef struct {
	int x;
	int y;
	SDL_Texture* texture;
} Entity;
