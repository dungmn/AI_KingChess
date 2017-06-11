#include "pawn.h"

pawn::pawn()
{
}

pawn::pawn(char name, int stt, int plyer, int status, int x, int y)
{
	this->name = name;
	this->player = plyer;
	this->status = status;
	this->coord.x = x;
	this->coord.y = y;
	this->stt = stt;
}


pawn::~pawn()
{
}
