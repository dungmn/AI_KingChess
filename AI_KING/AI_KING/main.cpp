#include <list>
#include "rook.h"
#include "king.h"
#include "pawn.h"
#include "Queen.h"
#include "bishop.h"
#include "knight.h"
#include <vector>
#include <iostream>
using namespace std;
vector<Chess*> playerMAX;
vector<Chess*> playerMIN;
typedef vector<Chess*>::iterator pit;


void initPawn()
{
	Chess *p;

	for (int i = 0; i < 8; i++)
	{
		p = new pawn('p', i, 0, 1, 1, i);
		playerMAX.push_back(p);

		p = new pawn('p', i, 1, 1, 6, i);
		playerMIN.push_back(p);
	}

}
//khoi tao rook, knight, bishop
void initRKB()
{
	Chess *p;

	//Rook
	p = new rook('r', 0, 0, 1, 0, 0); //name, stt, player, status, x, y
	playerMAX.push_back(p);
	p = new rook('r', 1, 0, 1, 0, 7);
	playerMAX.push_back(p);
	
	p = new rook('r', 0, 1, 1, 7, 0);
	playerMIN.push_back(p);
	p = new rook('r', 1, 1, 1, 7, 7);
	playerMIN.push_back(p);

	//Knight
	p = new knight('k', 0, 0, 1, 0, 1); //name, stt, player, status, x, y
	playerMAX.push_back(p);
	p = new knight('k', 1, 0, 1, 0, 6);
	playerMAX.push_back(p);

	p = new knight('k', 0, 1, 1, 7, 1);
	playerMIN.push_back(p);
	p = new knight('k', 1, 1, 1, 7, 6);
	playerMIN.push_back(p);

	//Bishop
	p = new bishop('b', 0, 0, 1, 0, 2); //name, stt, player, status, x, y
	playerMAX.push_back(p);
	p = new bishop('b', 1, 0, 1, 0, 5);
	playerMAX.push_back(p);

	p = new bishop('b', 0, 1, 1, 7, 2);
	playerMIN.push_back(p);
	p = new bishop('b', 1, 1, 1, 7, 5);
	playerMIN.push_back(p);


}
//khoi tao king va queen
void initKQ()
{
	Chess *p;
	//Queen
	p = new Queen('q', 0, 1, 0, 3); //name, player, status, x, y
	playerMAX.push_back(p);
	p = new Queen('q', 1, 1, 7, 3);
	playerMIN.push_back(p);

	//King
	p = new king('k', 0, 1, 0, 4);//name, player, status, x, y
	playerMAX.push_back(p);
	p = new king('k', 1, 1, 7, 4);
	playerMIN.push_back(p);
}
void init()
{
	initPawn();
	initRKB();
	initKQ();
}

void output()
{
	char c[8][8] = {};
	for (pit it = playerMAX.begin(); it != playerMAX.end(); it++)
	{
		c[(*it)->coord.x][(*it)->coord.y] = (*it)->name;
	}

	for (pit it = playerMIN.begin(); it != playerMIN.end(); it++)
	{
		c[(*it)->coord.x][(*it)->coord.y] = (*it)->name;
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << c[i][j];
		}
		cout << endl;
	}
}
int main()
{
	init();
	output();
}