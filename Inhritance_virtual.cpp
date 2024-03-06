#include<iostream>
using namespace std;
#include<string.h>
class Shape
{
	public:
	virtual	void calculateArea()=0;
};
class Circle: public Shape
{
	double res;
	int r;
	public:
	  Circle(int re)
	  {
	  	r=re;
	  }
	  void calculateArea()
	  {
	  	cout<<"Area of circle is "<<3.14*r*r<<endl;
	  }
};
class Rectangel :public Shape
{
	int l,b;
	public:
		Rectangel(int len,int br)
		{
			l=len;
			b=br;
		}
		void calculateArea()
		{
			cout<<"Area of Rectangle is "<<l*b<<endl;
		}
		
};
class Triangle : public Shape
{
	int area,l,b;
	public:
		Triangle(int len,int br)
		{
			l=len;
			b=br;
		}
		
	void calculateArea()
		{
			area=0.5*l*b;
			cout<<"Area of triangle is "<<area<<endl;
		}
};
int main()
{
	Circle c(5);
	c.calculateArea();
	Rectangel r(6,6);
	r.calculateArea();
	Triangle t(5,4);
	t.calculateArea();
}

