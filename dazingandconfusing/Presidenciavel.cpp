#include "Presidenciavel.h"
#include<iostream>


Presidenciavel::Presidenciavel()
{
	vel = 3;
	x = 100;
	y = 600;
	direcao = 1;
}

Presidenciavel::~Presidenciavel()
{
}

void Presidenciavel::setPosV(Vetor2D vec)
{
	x = vec.x;
	y = vec.y;
}

Vetor2D Presidenciavel::getPosV()
{
	Vetor2D vec(this->x, this->y);
	return vec;
}



void Presidenciavel::setPos(int x, int y)
{
	this->x = x;
	this->y = y;
}
 

int Presidenciavel::getX()
{
	return x;
}


int Presidenciavel::getY()
{
	return y;
}


void Presidenciavel::setVel(int vel)
{
	this->vel = vel;
}



void Presidenciavel::moverDir()
{
	direcao = 1;
	x += vel;
	sprite.setAnimacao(CAMINHANDO_DIR);
}


void Presidenciavel::moverEsq()
{
	direcao = 2;
	x -= vel;
	sprite.setAnimacao(CAMINHANDO_ESQ);
}


void Presidenciavel::setSpriteSheet(string spritesheet)
{
	sprite.setSpriteSheet(spritesheet);
	sprite.setEscala(1.5, 1.5);
}


void Presidenciavel::setDirecao(int dir)
{
	this->direcao = dir;
}


int Presidenciavel::getDirecao()
{
	return direcao;
}


void Presidenciavel::animar()
{
	sprite.avancarAnimacao();
	sprite.setVelocidadeAnimacao(4);
}


void Presidenciavel::desenhar()
{
	sprite.desenhar(x, y);
}