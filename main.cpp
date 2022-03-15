
#include <iostream>
using namespace std;

#include "Point.h"

int main() {
  cout << "Debut" << endl;
  
  Point Pt;
  Point PtR(3.2,3.1); 

  cout << Pt.GetAbs()<< endl;
  cout << Pt.GetOrd()<< endl;
  cout << PtR.GetAbs()<< endl; 
  cout << PtR.GetOrd()<< endl; 


  PtR.SetAbs(4.8);
  PtR.SetOrd(5.2);
  cout << "Valeurs de PtR set a 4.8 et 5.2" << endl;
  cout << PtR.GetAbs()<< endl; 
  cout << PtR.GetOrd()<< endl; 

  PtR.translater(1.1, 2.4);
  cout << "Valeurs de PtR translatées de 1.1 et 2.4" << endl;
  cout << PtR.GetAbs()<< endl; 
  cout << PtR.GetOrd()<< endl; 

  Pt.SetAbs(1.0);
  Pt.SetOrd(2.0);
  PtR.translater(Pt);
  cout << "Valeurs de PtR translatées de 1 et 2" << endl;
  cout << PtR.GetAbs()<< endl; 
  cout << PtR.GetOrd()<< endl;
}