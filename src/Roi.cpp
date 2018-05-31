#include "stdafx.h"
#include "Roi.h"
#include <iostream>
#include "Piece.h"
#include "Echiquier.h"
#include <cmath>

using namespace std;


Roi::Roi(bool white)
{
	m_x = 5;
	m_y = white ? 1 : 8;
	m_white = white;
	cout << "Constructeur Roi" << endl;
}

bool Roi::mouvementValide(Echiquier &e, int x, int y)
{
	bool estValide = false;

	if ((abs(x - m_x) <= 1) && (abs(y - m_y) <= 1))
	{
		//V�rifier si piece pr�sente ou pas sur case d'arriv�e
		if (e.getPiece(x, y) != NULL)
		{
			if (e.getPiece(x, y)->isWhite() != m_white)   //Si pi�ce couleur joueur adverse alors on l'enl�ve !
			{
				e.enleverPiece(x, y);
				cout << "Le mouvement du Roi est valide" << endl;
				estValide = true;
			}
		}
		else
		{
			cout << "Le mouvement du Roi est valide" << endl;
			estValide = true;
		}
	}

	return estValide;
}

char Roi::codePiece()
{
	return (m_white) ? 'R' : 'r';
}