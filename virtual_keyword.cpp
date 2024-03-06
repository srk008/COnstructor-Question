#include<iostream>
using namespace std;
#include<string.h>
class A
{
	public:
		virtual void Display()=0;
		virtual void Show()=0;
};
class D:public A
{
	public:
		void Display()
		{
			
		}
		void Show()
		{
			
		}
};
class B:public D
{
	public:
		void Display()
		{
			cout<<"I am from class B"<<endl;
		}
};
class C:public D
{
	public:
		void Show()
		{
			cout<<"I am From class C"<<endl;
		}
};
int main()
{
	C e;
	e.Show();
	B b;
	b.Display();
}

