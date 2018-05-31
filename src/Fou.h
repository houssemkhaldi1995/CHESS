#pragma once
#include"Piece.h"
#if !defined Fou_h
#define Fou_h

class Echiquier;




class Fou : virtual public Piece
{
public:
	Fou(bool white, bool left);
	bool mouvementValide(Echiquier &e, int x, int y);
	char codePiece();
};

#endif
