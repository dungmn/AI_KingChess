#pragma once
#include "Chess.h"
//quan CHOT
class pawn: public Chess 
{ 
public:
	int stt; //so quan pawn
	pawn();
	pawn(char name, int stt, int plyer, int status, int x, int y);
	int getSTT(){ return this->stt; };
	~pawn();
};

