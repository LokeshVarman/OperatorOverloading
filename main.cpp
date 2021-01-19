#include <iostream>
#include "Point.h"

using namespace std;

Point operator +(const Point &p1,const Point &p2)
{
  return Point(p1._x+p2._x, p1._y+p2._y);
}

Point operator -(const Point &p1, const Point &p2)
{
  return Point(p1._x-p2._x,p1._y-p2._y);
}

bool operator >(const Point &p1, const Point &p2)
{
  return (p1._x>p2._y);
}

ostream& operator <<(ostream &out, const Point &p)
{
  out << "(x:" << p._x << ",y:" << p._y << ")";
  return out;
}

istream& operator >>(istream &in, Point &p)
{
  in>>p._x;
  in>>p._y;
  return in;
}

int main()
{

	Point p1(2,3);
	Point p2(5,6);
  Point px;
  Point p3(2,4);
  cout << "Enter x and y for px:";
  cin>>px;

  cout << "PX:"<<px<<endl;
	//Point p3=add(p1, p2); //7,9
  //Point p3= p1+p2+px;
/*Point p3;
p3=p1+p2+px;*/

	cout << "P1:"<<endl;
  p1.printPoint();

  cout << "P2:"<<endl;
  p2.printPoint();

  cout << "P3:"<<endl;
  p3.printPoint();
  
  
	//Point p4=subtract(p2,p1);//3,3
  Point p4=p2-p1;//3,3
	cout << "P4:"<<endl;
  p4.printPoint();

	//Point p5=p3.preincrement();//p5 8,10, p3 8,10
  Point p5=++p3;//p5 8,10, 
	cout << "P3:"<<endl;
  p3.printPoint();

  cout << "P5:"<<endl;
  p5.printPoint();
	
  //Point p6=p4.postincrement();//p6 3,3, 
  //p4 4,4
	Point p6=p4++;
  cout << "P4:"<<endl;
  p4.printPoint();

  cout << "P6:"<<p6<<endl;
  
  //if (isgreater(p4,p1))
  if(p4>p1)
	{
		//p4.printPoint();
		cout<< p4 << " is greater"<<endl;
	}
	else
	{
		p1.printPoint();
		cout << "is greater"<<endl;
	}
}