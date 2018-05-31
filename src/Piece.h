#pragma once


#if !defined Piece_h
#define Piece_h

class Echiquier;

/**
* Declaration d'une classe mod�lisant une piece de jeu d'echec.
*/
class Piece
{
protected:
	int m_x;
	int m_y;
	bool m_white;

public:
	Piece();
	virtual ~Piece();
	Piece(const Piece & piece);
	Piece & operator=(const Piece & piece);
	Piece(int x, int y, bool white);
	void init(int x, int y, bool white);
	void move(int x, int y);
	int x();
	int y();
	bool isWhite();
	bool isBlack();
	void affiche();
	virtual bool mouvementValide(Echiquier &e, int x, int y); //= 0; //Le =0 permet de d�clarer la m�thode mouvementValide pour les pi�ces d�riv�es (roi, reine...) mais pas pour la pi�ce elle-m�me
	virtual char codePiece();
};
#endif