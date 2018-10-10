#include "Nokia.h"



Nokia::Nokia()
{
	x = 400;
	y = 300;
	vel = 8;
}


Nokia::~Nokia()
{
}

void Nokia::setX(int x)
{
	this->x = x;
}

void Nokia::setY(int y)
{
	this->y = y;
}

int Nokia::getX()
{
	return  x;
}

int Nokia::getY()
{
	return y;
}

int Nokia::getVel()
{
	return vel;
}

void Nokia::setVel(int vel)
{
	this->vel = vel;
}

void Nokia::desenhar()
{
	if (direcao == 2) {
		x -= vel;
	}
	else if (direcao == 1) {
		x += vel;
	}

}

void Nokia::animar()
{
	sprite.avancarAnimacao();
	sprite.setVelocidadeAnimacao(5);
}

void Nokia::setSpriteSheet(string spritesheet)
{
	sprite.setSpriteSheet(spritesheet);
}

void Nokia::atualizar()
{
	sprite.desenhar(x, y);
}

void Nokia::setDirecao(int dir)
{
	this->direcao = dir;
}