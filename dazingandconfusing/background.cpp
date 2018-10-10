#include "background.h"

background::background()
{
}


background::~background()
{
}


void background::setSpriteSheet(string spritesheet)
{
	back_layer.setSpriteSheet(spritesheet);
}

void background::setBackground(int width, int height)
{
	back_layer.desenhar(width, height);
}