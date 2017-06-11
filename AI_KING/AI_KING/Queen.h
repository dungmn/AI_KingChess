#pragma once
//Quan HAU
#include "Chess.h"
class Queen: public Chess
{
public:
	Queen();
	Queen(char name, int plyer, int status, int x, int y);
	int getSTT(){ return 0; };
	~Queen();
};

