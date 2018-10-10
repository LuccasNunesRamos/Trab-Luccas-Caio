#include <iostream>
#include <ctime>
#include <cstdlib>
#include "libUnicornio.h"
#pragma once

class Eleicoes
{
public:
	Eleicoes();
	~Eleicoes();
	bool timer(bool time);

protected:
	int seconds;
	int metaseconds = 240;
};
