/** 
 * Mise en oeuvre de Piece.h
 *
 * @file Piece.cxx
 */

// A besoin de la declaration de la classe
#include <iostream>
#include "Piece.h"

using namespace std;

Piece::Piece()
{
  // ne fait rien => objet instancie mais non validee.
  cout << "Construction Piece par defaut" << endl;
}

Piece::~Piece()
{
  cout << "Destructeur Piece" << endl;
}

Piece::Piece(const Piece & autre)
{
  m_x=autre.m_x;
  m_y=autre.m_y;
  m_white=autre.m_white;
  cout << "Constructeur Piece par copie" << endl;
}

Piece &
Piece::operator=(const Piece & autre)
{
  m_x=autre.m_x;
  m_y=autre.m_y;
  m_white=autre.m_white;
  cout << "Affectation Piece" << endl;
  return *this;
}
  
Piece::Piece( int x, int y, bool white )
{
  m_x = x;
  m_y = y;
  m_white = white;
  cout << "Construction Piece specialisee" << endl;
}

void
Piece::init( int x, int y, bool white )
{
  m_x = x;
  m_y = y;
  m_white = white;
}

void
Piece::move( int x, int y )
{
  m_x = x;
  m_y = y;
}

int
Piece::x() const
{
  return m_x;
}

int
Piece::y() const
{
  return m_y;
}

bool
Piece::isWhite() const
{
  return m_white;
}

bool
Piece::isBlack() const
{
  return !m_white;
}

void
Piece::affiche() const
{
  cout << "Piece: x=" << m_x << " y=" << m_y << " "
       << ( m_white ? "blanche" : "noire" ) << endl;
}
