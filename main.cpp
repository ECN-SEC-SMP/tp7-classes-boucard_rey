
#include <iostream>
using namespace std;

#include "Point.h"
#include "Forme.h"
#include "Cercle.h"
#include "Rectangle.h"
#include "Carre.h"

int main() {
  cout << "Debut" << endl;
  
  Point Pt;
  Point PtR(3.2,3.1); 

  Point PtN(2.2, 1.7);

  // PtR += PtN;
  
  
  // cout << Pt.GetAbs()<< endl;
  // cout << Pt.GetOrd()<< endl;
  // cout << PtR.GetAbs()<< endl; 
  // cout << PtR.GetOrd()<< endl; 

  // cout << PtR << endl;

  // Forme F(PtR);
  // cout << F << endl;
  // Forme G(PtN);
  // F += G;
  // cout << F << endl;

  Cercle C(1.5,PtN);
  cout << C << endl;

  // PtR.SetAbs(4.8);
  // PtR.SetOrd(5.2);
  // cout << "Valeurs de PtR set a 4.8 et 5.2" << endl;
  // cout << PtR.GetAbs()<< endl; 
  // cout << PtR.GetOrd()<< endl; 

  // PtR.translater(1.1, 2.4);
  // cout << "Valeurs de PtR translatées de 1.1 et 2.4" << endl;
  // cout << PtR.GetAbs()<< endl; 
  // cout << PtR.GetOrd()<< endl; 

  // Pt.SetAbs(1.0);
  // Pt.SetOrd(2.0);
  // PtR.translater(Pt);
  // cout << "Valeurs de PtR translatées de 1 et 2" << endl;
  // cout << PtR.GetAbs()<< endl; 
  // cout << PtR.GetOrd()<< endl;


  Rectangle R(8, 4, PtN);
  cout << R;

  Carre Car(5, PtN);
  cout << Car;
  
}
