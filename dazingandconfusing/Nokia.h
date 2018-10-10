#pragma once
#include"libUnicornio.h"
#include<string>

using namespace std;
class Nokia
{
public:
	Nokia();
	~Nokia();

	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	int getVel();
	void setVel(int vel);

	void desenhar();
	void animar();
	void setSpriteSheet(string spritesheet);
	void atualizar();
	void setDirecao(int dir);

protected:
	int x, y;
	int vel;
	Sprite sprite;
	int direcao;
};
