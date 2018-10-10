#include "Eleicoes.h"

Eleicoes::Eleicoes()
{
}
Eleicoes::~Eleicoes()
{
}

bool Eleicoes::timer(bool time = true)
{
	clock_t startTime = clock();
	seconds = (clock() - startTime) / CLOCKS_PER_SEC;
	if (seconds >= metaseconds)
	{
		return false;
	}
		else
		{
			return true;
		}
}