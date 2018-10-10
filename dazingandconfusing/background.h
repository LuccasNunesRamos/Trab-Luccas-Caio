#pragma once
#include <libUnicornio.h>
#include <string>

class background
{
public:
	background();
	~background();
	void setBackground(int width, int height);
	void setSpriteSheet(string spritesheet);

private:
	Sprite back_layer;
	int width, height;
};

