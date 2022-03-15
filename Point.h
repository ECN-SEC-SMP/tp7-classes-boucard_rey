#include <iostream>
using namespace std;

#ifndef cpp_Point_h
#define cpp_Point_h


class Point  {

private :
  float abs;
  float ord;

public :
  Point();
  Point(float x, float y);
  Point(const Point& P);


  float GetAbs();
  float GetOrd();
  void SetAbs(float x);
  void SetOrd(float y);
  void translater(float x, float y);
  void translater(Point P);//check

  void operator+=(const Point& P);
  friend ostream& operator<<(ostream& os, const Point& P);
};

#endif