#pragma once
#include"Piece.h"
#if !defined Pion_h
#define Pion_h

class Echiquier;




class Pion : virtual public Piece
{
public:
	Pion(int x, bool white);
	bool mouvementValide(Echiquier &e, int x, int y);
	char codePiece();
};
#endif
