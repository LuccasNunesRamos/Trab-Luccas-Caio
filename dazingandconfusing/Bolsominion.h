#pragma once
#include "Presidenciavel.h"

class Bolsominion :
	public Presidenciavel
{
public:
	Bolsominion();
	~Bolsominion();
	void especial() override;
	void setX(int x);
	void setY(int y);

protected:
	int x, y;
};

