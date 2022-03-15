#include <iostream> 
using namespace std;

#include "Forme.h"
#include "Point.h"



Forme::Forme(const Point& _P){
  this->P = _P;
}

Point Forme::GetPoint(){
   return this->P;
}
void Forme::SetPoint(const Point& _P){
   P = _P;
}

void Forme::operator+=(const Forme& F){
  P+=F.P;
}
ostream& operator<<(ostream& os, const Forme& F){
  os << "Forme centrée en : " << F.P;
  return os;
}