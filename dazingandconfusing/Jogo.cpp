#include "Jogo.h"

Jogo::Jogo()
{
	select = 0;
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(1280, 720, false);
	this->mapa_assets.open("..\\mapa_assets.txt", ios::in);
	
	if (!mapa_assets) {
		gDebug.erro("não abriu o arquivo", this);
	}
	
	CarregadorDeAssets * cda_carregador_assets = new CarregadorDeAssets;
	if (!cda_carregador_assets->CarregarAssets(mapa_assets)) {
		gDebug.erro("Falha no carregamento de recursos");
	}
	fundo.setSpriteSheet("fundo");
	
	pres[0] = new Daciolo;
	pres[1] = new Bolsonaro;
	pres[2] = new Marina;
	
	pres[0]->setSpriteSheet("daciolo");
	pres[1]->setSpriteSheet("bolsonaro");
	pres[2]->setSpriteSheet("marina");
	nokia->setSpriteSheet("nokia");
	bolsominion->setSpriteSheet("zumbi");

	Daciolo * d = (Daciolo*)pres[0];
	d->setAudio("gloria");	
}


void Jogo::finalizar()
{
	gRecursos.descarregarTudo();

	uniFinalizar();
}


void Jogo::executar()
{
	while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		fundo.setBackground(640, 360);

		//
		if (gTeclado.pressionou[TECLA_1])
		{
			posicao = pres[select]->getPosV();
			select = 0;
			pres[select]->setPosV(posicao);
		}

		else if (gTeclado.pressionou[TECLA_2])
		{
			posicao = pres[select]->getPosV();
			select = 1;
			pres[select]->setPosV(posicao);
		}

		else if (gTeclado.pressionou[TECLA_3])
		{
			posicao = pres[select]->getPosV();
			select = 2;
			pres[select]->setPosV(posicao);
		}


		//--------------------------------------------------------------//
		//Seleção presidenciável

		if (select == 0 || 1 || 2)
		{
			pres[select]->desenhar();
			if (select == 1 && gTeclado.segurando[TECLA_ESPACO])
			{
				bolsominion->setDirecao(pres[select]->getDirecao());
				bolsominion->desenhar();
			}
		}
		
		//--------------------------------------------------------------//
		//Movimentação presidenciável

		if (gTeclado.segurando[TECLA_DIR])
		{
			pres[select]->moverDir();
			pres[select]->animar();
			if (select == 1)
			{
				bolsominion->moverDir();
				bolsominion->animar();
			}
		}
		else if (gTeclado.segurando[TECLA_ESQ])
		{
			pres[select]->moverEsq();
			pres[select]->animar();
			if (select == 1)
			{
				bolsominion->moverEsq();
				bolsominion->animar();
			}
		}

		//--------------------------------------------------------------//
		//Habilidade especial

		if (select == 0 && gTeclado.pressionou[TECLA_ESPACO])
		{
			nokia->setDirecao(pres[0]->getDirecao());
			nokia->desenhar();
			nokia->atualizar();	
			nokia->animar();
		}
		
		if (select == 0 && gTeclado.segurando[TECLA_ESPACO])
		{
			nokia->desenhar();
			nokia->atualizar();
			nokia->animar();
		}
		else 
		{
			nokia->setX(pres[select]->getX()+40);
			nokia->setY(pres[select]->getY()+40);
		}

		if (select == 2 && gTeclado.pressionou [TECLA_ESPACO]) 
		{
			pres[2]->especial();
		}



		uniTerminarFrame();
	}
}