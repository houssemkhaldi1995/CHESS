#pragma once
#include"Piece.h"
#if !defined Tour_h
#define Tour_h

class Echiquier;


class Tour : virtual public Piece
{
public:
	Tour(bool white, bool left);
	bool mouvementValide(Echiquier &e, int x, int y);
	char codePiece();
};
#endif
