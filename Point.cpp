#include <iostream> 
using namespace std;

#include "Point.h"



Point::Point(){
  abs = 0;
  ord = 0;
}

Point::Point(float x, float y){
  this->abs = x;
  this->ord = y;
}

float Point::GetAbs(){
   return this->abs;
}
float Point::GetOrd(){
   return this->ord;
}
void Point::SetAbs(float x){
  abs = x;
}
void Point::SetOrd(float y){
   ord = y;
}
Point::Point(const Point& P){
  this->abs = P.abs;
  this->ord = P.ord;
}


void Point::translater(float x, float y){
  this->abs += x;
  this->ord += y;
}

void Point::translater(Point Pt){
  this->abs += Pt.GetAbs();
  this->ord += Pt.GetOrd();
}
