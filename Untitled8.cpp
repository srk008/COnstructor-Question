#include<iostream>
using namespace std;
#include<string.h>
class Vehicle
{
	int speed,capacity;
	char brand;
	public:
		Vehicle(int s,int ca,char br[])
		{
			speed=s;
			capacity=ca;
			strcpy(brand,br);
		}
	void show()
	{
		cout<<speed<<"\t"<<capacity<<"\t"<<brand<<endl;
	}	
};
int main()
{
	int s,ca;
	char br;
	cout<<"Enter speed capacity and brand"<<endl;
	cin>>s>>ca>>br;
	Vehicle v(s,ca,br);
	v.show();
}
