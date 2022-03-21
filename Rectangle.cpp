#include <iostream> 
using namespace std;

#include "Rectangle.h"


Rectangle::Rectangle(Point P) : Forme(P){
  this->largeur = 1;
  this->longueur = 2;
}

Rectangle::Rectangle(float l, float L, Point P) : Forme(P){
  this->largeur = l;
  this->longueur = L;
}

float Rectangle::GetLongueur(){
  return this->longueur;
}

float Rectangle::GetLargeur(){
  return this->largeur;
}

void Rectangle::SetLongueur(float l){
  longueur = l;
}

void Rectangle::SetLargeur(float L){
  this->largeur = L;
}

float Rectangle::Surface() {
  return (this->longueur * this->largeur);
}

float Rectangle::Perimetre() {
  return ((this->longueur + this->largeur)*2);
}

ostream& operator<<(ostream& os, const Rectangle& R){
  os << "Rectangle centré en : " << R.P << endl << " de largeur: " << R.largeur << " de longueur: " << R.longueur << endl;
  return os;
}