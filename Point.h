#ifndef POINTHEADER
#define POINTHEADER
#include <iostream>

using namespace std;

class Point
{
  int _x, _y;
  public:
    Point(int x=0, int y=0);
    void printPoint();
    friend Point operator +(const Point &p1,const Point &P2);
    friend Point operator -(const Point &p1, const Point &p2);
    friend bool operator >(const Point &p1, const Point &p2);
    Point operator ++();//preincrement
    Point operator ++(int);//postincrement
    friend ostream& operator <<(ostream &out, const Point &p);
    friend istream& operator >>(istream &in, Point &p);
    Point& operator=(const Point &p);
};

#endif