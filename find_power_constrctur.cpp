#include<iostream>
using namespace std;
#include<string.h>
class Power
{
	private:
	 int num,pow,res=1;
	 public:
	 Power(int n,int p)
	 {
	 	num=n;
	 	pow=p;
	 }
	 int getpower()
	 {
	   for(int i=1;i<=pow;i++)
	   {
	   	 res=res*num;
		}	
		return res;
	 }	
};
int main()
{
	int number,power,z;
	cout<<"Enter Number and power"<<endl;
	cin>>number>>power;
	Power r(number,power);
	z=r.getpower();
	cout<<"Poweer is "<<z<<endl;
}
