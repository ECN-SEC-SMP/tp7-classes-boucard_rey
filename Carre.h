#ifndef cpp_Carre_h
#define cpp_Carre_h

#include <iostream>
#include "Rectangle.h"
#include "Forme.h"
using namespace std;

class Carre : public Rectangle {

protected :

public :
  Carre(Point P);
  Carre(float _l, Point P);
  
  float GetCote();
  void SetCote(float l);

  float Surface();
  float Perimetre();

  friend ostream& operator<<(ostream& os, const Carre& R);

};

#endif