#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"I am from Class A"<<endl;
		}
};
class B:virtual  public A
{
	public:
		void show1()
		{
			cout<<"I am From Class B "<<endl;
		}
};
class C :virtual public A
{
	public:
		void show3()
		{
			cout<<"I am From Class C "<<endl;
		}
};
class D : public B,public C
{
	public:
		void show2()
		{
			cout<<"I am from Class D"<<endl;
		}
};
int main()
{
	D d;

	d.show3();
	d.show1();
	d.show2();
	d.show();
}

