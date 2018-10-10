#pragma once
#include<string>
#include"libUnicornio.h"
#include"Presidenciavel.h"


using namespace std;

enum PersonagemAnim
{	
	CAMINHANDO_DIR,
	CAMINHANDO_ESQ,
};

class Presidenciavel
{
public:
	Presidenciavel();
	~Presidenciavel();
	void setPosV(Vetor2D vec);
	Vetor2D getPosV();
	virtual void especial() = 0;
	virtual void desenhar();
	int getX();
	int getY();
	int getDirecao();
	void setDirecao(int dir);
	virtual void setPos(int x, int y);
	void setVel(int vel);
	void setSpriteSheet(string spritesheet);
	void moverDir();
	void moverEsq();
	void animar();

protected:
	Sprite sprite;
	int vel, direcao;
	int x, y;
};