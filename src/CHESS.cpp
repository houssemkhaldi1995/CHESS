// CHESS.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"


// Utile pour l'affichage
#include <iostream>
#include "Piece.h"
#include "Joueur.h"
#include "Echiquier.h"
#include "Partie.h"

// Pour utiliser les flux de iostream sans mettre "std::" tout le temps.
using namespace std;


bool compare(Piece &pa, Piece &pb)
{
	return ((pa.x() == pb.x()) && (pa.y() == pb.y()));
}



/*
* Programme principal
*/
int main(int argc, char** argv)
{
	Partie p;
	p.jouerPartie();
}




