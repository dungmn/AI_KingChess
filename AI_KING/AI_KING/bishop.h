#pragma once
//quan TUONG
#include "Chess.h"
class bishop: public Chess
{
public:
	int stt;
	bishop();
	bishop(char name, int stt, int plyer, int status, int x, int y);
	int getSTT(){ return this->stt; };
	~bishop();
};

