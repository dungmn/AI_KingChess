#include "Queen.h"


Queen::Queen()
{
}

Queen::Queen(char name, int plyer, int status, int x, int y)
{
	this->name = name;
	this->player = plyer;
	this->status = status;
	this->coord.x = x;
	this->coord.y = y;
	this->name = 'q';

}

Queen::~Queen()
{
}
