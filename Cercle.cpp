#include <iostream> 
using namespace std;

#include "Cercle.h"

Cercle::Cercle(Point P) : Forme(P) {
  Rayon = 1;
}


Cercle::Cercle(float R,Point P) : Forme(P){
  this->Rayon = R;
}

float Cercle::GetRayon(){
  return Rayon;
}
void Cercle::SetRayon(float R){
  Rayon = R;
}
float Cercle::Surface() {
  float _surface = 3.14*Rayon*Rayon;
  return _surface;
}

float Cercle::Perimetre() {
  float _perimetre = 2*3.14*Rayon;
  return _perimetre;
}

// void Cercle::operator+=(const Cercle& F){
//   P+=F.P;
// }


ostream& operator<<(ostream& os, const Cercle& C){

 
  os << "Cercle centré en : " << C.P << endl << "Rayon de " << C.Rayon << endl;
  // << "Le périmètre est de " << C.Perimetre() << endl << "La surface est de " << C.Surface() << endl;
  return os;
}

