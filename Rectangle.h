#ifndef cpp_Rectangle_h
#define cpp_Rectangle_h

#include <iostream>
#include "Forme.h"
using namespace std;


class Rectangle : public Forme {

protected :
  float longueur;
  float largeur;

public :
  Rectangle(Point P);
  Rectangle(float l, float L, Point P);
  
  float GetLongueur();
  float GetLargeur();
  void SetLongueur(float l);
  void SetLargeur(float L);

  float Surface() ;
  float Perimetre() ;

friend ostream& operator<<(ostream& os, const Rectangle& R);

};

#endif