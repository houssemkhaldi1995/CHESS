#pragma once
#include"Piece.h"
#if !defined Roi_h
#define Roi_h

class Echiquier;

class Roi : public Piece
{
public:
	Roi(bool white);
	bool mouvementValide(Echiquier &e, int x, int y);
	char codePiece();
};
#endif
