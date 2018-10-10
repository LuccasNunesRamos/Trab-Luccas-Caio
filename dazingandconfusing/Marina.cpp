#include "Marina.h"
#include "Eleicoes.h"


Marina::Marina()
{

}


Marina::~Marina()
{
}

void Marina::especial()
{
		sprite.setCorAlpha(25);
	
	 if (time==false)
	{
		sprite.setCorAlpha(255);
	}
}
