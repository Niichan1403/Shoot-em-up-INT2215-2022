
#include "main.h"

int main(int argc, char* argv[])
{
	memset(&app, 0, sizeof(App));
	memset(&player, 0, sizeof(Entity));
	memset(&bullet, 0, sizeof(Entity));

	initSDL();

	atexit(cleanup);

	player.texture = loadTexture("gfx/player.png");
	player.x = 250;
	player.y = 300;
	bullet.texture = loadTexture("gfx/playerBullet.png");

	while (1)
	{
		prepareScene();

		doInput();

		player.x += player.dx;
		player.y += player.dy;

		if (app.up)
		{
			player.y -= 4;
		}

		if (app.down)
		{
			player.y += 4;
		}

		if (app.left)
		{
			player.x -= 4;
		}

		if (app.right)
		{
			player.x += 4;
		}

		if (app.fire && bullet.health == 0) 
		{
			bullet.x = player.x;
			bullet.y = player.y;
			bullet.dx = 16;
			bullet.dy = 0;
			bullet.health = 1;
		}

		bullet.x += bullet.dx;
		bullet.y += bullet.dy;

		if (bullet.x > SCREEN_WIDTH) 
		{
			bullet.health = 0;
		}

		blit(player.texture, player.x, player.y);

		if (bullet.health > 0) 
		{
			blit(bullet.texture, bullet.x, bullet.y);
		}

		presentScene();

		SDL_Delay(16);
	}

	return 0;
}
