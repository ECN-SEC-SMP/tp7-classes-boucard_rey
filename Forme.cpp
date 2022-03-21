#include <iostream> 
using namespace std;

#include "Forme.h"


Forme::Forme(Point _P){
  this->P = _P;
}

// Point Forme::GetPoint(){
//    return P;
// }
// void Forme::SetPoint(const Point& _P){
//    P = _P;
// }

ostream& operator<<(ostream& os, const Forme& F){
  os << "Forme centrée en : " << F.P;
  return os;
}
