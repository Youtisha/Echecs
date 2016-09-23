/** 
 * Programme test de Piece
 *
 * @file testPiece.cxx
 */

// Utile pour l'affichage
#include <iostream>
#include "Piece.h"
#include "Joueur.h"

// Pour utiliser les flux de iostream sans mettre "std::" tout le temps.
using namespace std;

bool compare(const Piece &p1, const Piece &p2)
{
  return (p1.x()==p2.x()) && (p1.y()==p2.y());
}

/**
 * Programme principal
 */
int main( int argc, char** argv )
{
  // instancie un objet p1 de type Piece
  Piece p1;
  // p1 est une piece blanche de coordonnees (3,3)
  p1.init( 3, 3, true );

  Piece p2( 4, 4, false);
  
  if (p1.isWhite())
    cout << "Piece blanche" << endl;
  else
    cout << "Piece noir" << endl;

  cout << "Piece " << ((p2.isBlack())?"noir":"blanche") << endl;
  
  // On l'affiche
  p1.affiche();
  p2.affiche();

  if (compare(p1,p2))
    cout << "memes positions" << endl;
  else
    cout << "positions differentes" << endl;

  Piece p3=p1; // constructeur par copie
  p3=p2; // operateur d'affectation
  
  //Piece tbl[4];

  /*
  Joueur jb(true);
  Joueur jn(false);
  jb.affiche();
  jn.affiche();
  */

  // les objets definis dans cette fonction sont automatiquement d�truits.
  // Ex : p1
}
