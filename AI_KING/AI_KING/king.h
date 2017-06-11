#pragma once
//quan VUA
#include "Chess.h"
class king: public Chess
{
public:
	king();
	king(char name, int plyer, int status, int x, int y);
	int getSTT(){ return 0; };
	~king();
};

