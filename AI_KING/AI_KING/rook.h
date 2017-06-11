#pragma once
#include "Chess.h"
//quan XE
class rook: public Chess
{
public:
	int stt;
	rook();
	rook(char name, int stt, int plyer, int status, int x, int y);
	int getSTT(){ return this->stt; };
	~rook();
};

