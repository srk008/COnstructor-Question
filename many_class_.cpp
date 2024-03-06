#include<iostream>
using namespace std;
#include<string.h>
class Shape
{
  public:
  void show()
  {
  	cout<<"This is shape "<<endl;
	  }	
};
class Polygon:virtual public Shape
{
	public:
	void show()
	{
		cout<<"This is shape of Polygon"<<endl;
		}	
};
class Rectangle
{
	public:
		void display()
		{
			cout<<"Rectangle is a polygon "<<endl;
		}
};
class Triangle
{
   public:
   	void display()
   	{
   		cout<<"Triangle is polygon "<<endl;
	   }
   	
};
class Square
{
  public:
  void display()
  {
  	cout<<"Squre is rectangle "<<endl;
	  }	
};
int main()
{
	Shape q;
	q.show();
	Polygon p;
	p.show();
//	p.show();
	Rectangle r;
	r.display();
	Triangle t;
	t.display();
	Square s;
	s.display();
	
}
