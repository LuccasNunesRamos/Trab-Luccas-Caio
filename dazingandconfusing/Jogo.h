#pragma once
#include "libUnicornio.h"
#include<fstream>
#include "background.h"
#include"Bolsonaro.h"
#include"Daciolo.h"
#include"Marina.h"
#include"CarregadordeAssets.h"
#include"Presidenciavel.h"
#include"Nokia.h"
#include"Bolsominion.h"


class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();
	void executar();
	
protected:	
	background fundo;
	fstream mapa_assets;
	int select;
	Presidenciavel * pres[3];
	Nokia * nokia = new Nokia;
	Bolsominion * bolsominion = new Bolsominion;
	Vetor2D posicao;
};