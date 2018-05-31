#include "stdafx.h"
#include "Cavalier.h"
#include <iostream>
#include "Piece.h"
#include "Echiquier.h"
#include <cmath>

using namespace std;


Cavalier::Cavalier(bool white, bool left) : Piece(left ? 2 : 7, white ? 1 : 8, white)
{

	cout << "Constructeur Cavalier" << endl;
}

bool Cavalier::mouvementValide(Echiquier &e, int x, int y)
{
	bool estValide = false;

	//V�rifier que la case d'arriv�e est valide
	if ((abs(x - m_x) == 2 && abs(y - m_y) == 1) || (abs(x - m_x) == 1 && abs(y - m_y) == 2))
	{
		if (e.getPiece(x, y) != NULL)
		{
			if (e.getPiece(x, y)->isWhite() != m_white)
			{
				e.enleverPiece(x, y);
				cout << "Le mouvement du Cavalier est valide." << endl;
				estValide = true;
			}
		}
		else
		{
			cout << "Le mouvement du Cavalier est valide." << endl;
			estValide = true;
		}
	}

	return estValide;
}

char Cavalier::codePiece()
{
	return (m_white) ? 'C' : 'c';
}
