#include<iostream>
using namespace std;
#include<string.h>
class Vehical
{
	public:
		void start()
		{
			cout<<"I vehical is starting.."<<endl;
		}
};
class car:public Vehical
{
	public:
		void drive()
		{
			cout<<"I am driving Vehicle.."<<endl;
		}
};
int main()
{
	car c;
	c.start();
	c.drive();
}
