#include <iostream>
#include "Point.h"

using namespace std;

Point:: Point(int x,int y)
{
  _x=x;
  _y=y;
}

void Point::printPoint()
{
  cout<<"X:"<<_x<<"Y: "<<_y<<endl;
}


Point Point::operator ++()
{
  return Point(++_x, ++_y);
}

Point Point::operator ++(int){
  return Point(_x++,_y++);
}

Point& Point ::operator=(const Point &p)
{
  cout << "Assignment called"<<endl;
  this->_x=p._x;
  this->_y=p._y;
  return *this;
}