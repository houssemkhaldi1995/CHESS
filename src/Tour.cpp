#include "stdafx.h"
#include "Tour.h"
#include <iostream>
#include "Piece.h"
#include "Echiquier.h"
#include <cmath>

using namespace std;


Tour::Tour(bool white, bool left) : Piece(left ? 1 : 8, white ? 1 : 8, white)
{

	cout << "Constructeur Tour" << endl;
}

bool Tour::mouvementValide(Echiquier &e, int x, int y)
{
	bool estValide = false;
	int i = 0;  //pour indice de boucle

				//v�rifier si pi�ce sur chemin et v�rifier si pi�ce sur case d'arriv�e et sa couleur
	if ((x == m_x && y >= 1 && y <= 8) || (y == m_y && x >= 1 && x <= 8))
	{
		if (m_x < x)    //d�placement vers droite
		{
			for (i = m_x; i <= x; i++)
			{
				if (e.getPiece(i, y) != NULL)
				{
					if (i == x && e.getPiece(i, y)->isWhite() != m_white)   //Si pi�ce couleur joueur adverse alors on l'enl�ve !
					{
						e.enleverPiece(x, y);
						cout << "Le mouvement de la Tour est valide : deplacement Droite" << endl;
						estValide = true;
					}
				}
				else
				{
					if (i == x && estValide == false)
					{
						cout << "Le mouvement de la Tour est valide : deplacement Droite" << endl;
						estValide = true;
					}
				}
			}
		}
		else
		{
			if (m_x > x)    //d�placement vers gauche
			{
				for (i = m_x; i <= x; i--)
				{
					if (e.getPiece(i, y) != NULL)
					{
						if (i == x && e.getPiece(i, y)->isWhite() != m_white)   //Si pi�ce couleur joueur adverse alors on l'enl�ve !
						{
							e.enleverPiece(x, y);
							cout << "Le mouvement de la Tour est valide : deplacement Gauche" << endl;
							estValide = true;
						}
					}
					else
					{
						if (i == x && estValide == false)
						{
							cout << "Le mouvement de la Tour est valide : deplacement Gauche" << endl;
							estValide = true;
						}
					}
				}
			}
			else
			{
				if (m_y < y)    //d�placement vers bas
				{
					for (i = m_y; i <= y; i++)
					{
						if (e.getPiece(x, i) != NULL)
						{
							if (i == y && e.getPiece(x, i)->isWhite() != m_white)   //Si pi�ce couleur joueur adverse alors on l'enl�ve !
							{
								e.enleverPiece(x, y);
								cout << "Le mouvement de la Tour est valide : deplacement Bas" << endl;
								estValide = true;
							}
						}
						else
						{
							if (i == y && estValide == false)
							{
								cout << "Le mouvement de la Tour est valide : deplacement Bas" << endl;
								estValide = true;
							}
						}
					}
				}
				else            //d�placement vers haut
				{
					for (i = m_y; i <= y; i--)
					{
						if (e.getPiece(x, i) != NULL)
						{
							if (i == y && e.getPiece(x, i)->isWhite() != m_white)   //Si pi�ce couleur joueur adverse alors on l'enl�ve !
							{
								e.enleverPiece(x, y);
								cout << "Le mouvement de la Tour est valide : deplacement Haut" << endl;
								estValide = true;
							}
						}
						else
						{
							if (i == y && estValide == false)
							{
								cout << "Le mouvement de la Tour est valide : deplacement Haut" << endl;
								estValide = true;
							}
						}
					}
				}
			}
		}
	}

	return estValide;
}

char Tour::codePiece()
{
	return (m_white) ? 'T' : 't';
}