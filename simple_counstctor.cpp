#include<iostream>
using namespace std;
#include<string.h>
class Car
{
  int model;
  char brand[30];
  public:
  	Car(int m,char n[])
  	{
  		model=m;
  		strcpy(brand,n);
	 }
	 void display()
	 {
	 	cout<<model<<"\t"<<brand<<endl;
	 }
  	
};
int main()
{
	int n;
	char na[30];
	cout<<"Enter model and brand"<<endl;
	cin>>n>>na;
	
	Car c(n,na);
	c.display();
}
