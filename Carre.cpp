#include <iostream> 
using namespace std;

#include "Carre.h"

Carre::Carre(Point P) : Forme(P) {
  largeur = 1;
  longueur = 1;
}


Carre::Carre(float _l,Point P) : Forme(P){
  largeur = _l;
  longueur = _l;
}

float Carre::GetCote(){
  return largeur;
}
void Carre::SetCote(float l){
  largeur = l;
  longueur = l;
}


float Carre::Surface(){
  float surface = this->largeur*this->largeur;
  return surface;
}

float Carre::Perimetre(){
  return (this->longueur*4);
}


ostream& operator<<(ostream& os, const Carre& Ca){
  os << "Rectangle centré en : " << Ca.P << endl << " de coté: " << Ca.largeur << endl;
  return os;
}
