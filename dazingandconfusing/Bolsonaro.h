#pragma once
#include "Presidenciavel.h"

class Bolsonaro :
	public Presidenciavel
{
public:
	Bolsonaro();
	~Bolsonaro();
	void especial() override;
};