#pragma once
#include "Point.h"
class Chess
{
public:
	char name;
	int player;
	int status;
	Point coord;
	Chess();
	virtual int getSTT() = 0;
	virtual ~Chess();
};

