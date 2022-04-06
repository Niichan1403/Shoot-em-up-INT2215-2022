
#include "main.h"

int main(int argc, char* argv[])
{
	memset(&app, 0, sizeof(App));
	memset(&player, 0, sizeof(Entity));

	initSDL();

	player.x = 250;
	player.y = 300;
	player.texture = loadTexture("gfx/player.png");

	atexit(cleanup);

	while (1)
	{
		prepareScene();

		doInput();

		blit(player.texture, player.x, player.y);

		presentScene();

		SDL_Delay(16);
	}

	return 0;
}
