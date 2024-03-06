#include<iostream>
using namespace std;
#include<string.h>
class Rectangle
{
   int length,br;
   public:
   	Rectangle()
   	{
   	    length=0;
		br=0;
		cout<<"Area of Reactangle is "<<length*br<<endl;   	
	}
	Rectangle(int l,int b)
	{
		length=l;
		br=b;
		cout<<"Area of reactangle from parameter construtor is "<<length*br<<endl;
		
	}
	Rectangle(int l)
	{
		length=l;
		br=l;
		cout<<"Area of reactangle is from only one paramter"<<length*br<<endl;
	}
};
int main()
{
	int l,b;
	cout<<"Enetr length and breath "<<endl;
	cin>>l>>b;
	Rectangle r();
	cout<<"Enetr length and breath "<<endl;
	Rectangle r1(l,b);
	Rectangle r2(l);
}
