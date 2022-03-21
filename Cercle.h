#ifndef cpp_Cercle_h
#define cpp_Cercle_h

#include <iostream>
using namespace std;
#include "Forme.h"


class Cercle : public Forme {

protected :
  float Rayon;

public :
  Cercle(Point P);
  Cercle(float R, Point P);
  
  float GetRayon();
  void SetRayon(float R);
  float Surface();
  float Perimetre();
  friend ostream& operator<<(ostream& os, const Cercle& C);

};

#endif