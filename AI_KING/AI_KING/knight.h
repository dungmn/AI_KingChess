#pragma once
//Quan MA
#include "Chess.h"
class knight: public Chess
{
public:
	int stt;
	knight();
	knight(char name, int stt, int plyer, int status, int x, int y);
	int getSTT(){ return this->stt; };
	~knight();
};

