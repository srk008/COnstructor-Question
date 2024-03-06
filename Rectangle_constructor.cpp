#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int area,l,b;
	public:
	Rectangle()
	{
	 l=0;
	 b=0; 
	 area=l*b;	
	}
	Rectangle(int len,int br)
	{
		area=0.5*len*br;
	}
	Rectangle(int len)
	{
		area=len;
	}
	void show()
	{
		cout<<"Result is "<<area<<endl;
	}		
};
int main()
{
	int len,bre;
	cout<<"ENter len and breath"<<endl;
	cin>>len>>bre;
	Rectangle r;
	r.show();
	Rectangle r1(len,bre);
	r1.show();
	Rectangle r3(len);
	r3.show();
	
}
