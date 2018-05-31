#pragma once
#include"Fou.h"
#include"Tour.h"
#include"Piece.h"
#if !defined Reine_h
#define Reine_h

class Echiquier;




class Reine : public Fou, public Tour
{
public:
	Reine(bool white);
	bool mouvementValide(Echiquier &e, int x, int y);
	char codePiece();
};

#endif
