#pragma once
#include "Presidenciavel.h"
#include "Eleicoes.h"

class Marina :
	public Presidenciavel
{
public:
	Marina();
	~Marina();
	void especial() override;
};
