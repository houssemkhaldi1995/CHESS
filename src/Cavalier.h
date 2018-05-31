#pragma once
#include"Piece.h"
#if !defined Cavalier_h
#define Cavalier_h

class Echiquier;




class Cavalier : virtual public Piece
{
public:
	Cavalier(bool white, bool left);
	bool mouvementValide(Echiquier &e, int x, int y);
	char codePiece();
};
#endif