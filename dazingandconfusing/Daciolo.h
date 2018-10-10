#pragma once
#include "Presidenciavel.h"
#include "Nokia.h"
#include "Jogo.h"
#include<string>


class Daciolo :
	public Presidenciavel
{
public:
	Daciolo();
	~Daciolo();
	void especial() override;
	void setAudio(string nome);

protected:
	Som som;	
};
