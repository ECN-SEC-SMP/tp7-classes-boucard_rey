
#ifndef cpp_Forme_h
#define cpp_Forme_h

#include <iostream>
#include "Point.h"
using namespace std;

class Forme {

protected :
  Point P;

public :
  Forme(Point _P);
  
  // Point GetPoint(); 
  // void SetPoint(const Point& _P);

  virtual float Perimetre()=0;
  virtual float Surface()=0;

  void operator+=(const Forme& F);
  friend ostream& operator<<(ostream& os, const Forme &F);
  
};

#endif