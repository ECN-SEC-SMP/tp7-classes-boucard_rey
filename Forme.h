#include <iostream>
#include "Point.h"
using namespace std;

#ifndef cpp_Forme_h
#define cpp_Forme_h


class Forme {

private :
  Point P;

public :

  Forme(const Point& _P);
  
  Point GetPoint();
  void SetPoint(const Point& _P);

  virtual float Perimetre()=0;
  virtual float Surface()=0;

  void operator+=(const Forme& F);
  friend ostream& operator<<(ostream& os, const Forme& F);

};

#endif