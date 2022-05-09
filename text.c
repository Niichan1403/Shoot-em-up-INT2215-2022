#include "text.h"

static SDL_Texture* fontTexture;
static char drawTextBuffer[MAX_LINE_LENGTH];

void initFonts(void) 
{
	fontTexture = loadTexture("gfx/font.png");
}

void drawText(int x, int y, int r, int g, int b, char* format, ...) 
{
	int i, len, c;
	SDL_Rect rect;
	va_list args;

	memset(&drawTextBuffer, '\0', sizeof(drawTextBuffer));

	va_start(args, format);
	vsprintf_s(drawTextBuffer, sizeof(drawTextBuffer), format, args);
	va_end(args);

	len = strlen(drawTextBuffer);

	rect.w = GLYPH_WIDTH;
	rect.h = GLYPH_HEIGHT;
	rect.y = 0;

	SDL_SetTextureColorMod(fontTexture, r, g, b);

	for (i = 0; i < len; i++) 
	{
		c = drawTextBuffer[i];

		if (c >= ' ' && c <= 'Z')
		{
			rect.x = (c - ' ') * GLYPH_WIDTH;

			blitRect(fontTexture, &rect, x, y);

			x += GLYPH_WIDTH;
		}
	}
}