#include<iostream>
using namespace std;
#include<string.h>
class Vehical
{
	protected:
	int price,mno;
	char name[30];
	public:
	Vehical(int price,int mno,char name[])
	{
		this->mno=mno;
		this->price=price;
		strcpy(this->name,name);
	}
	void Disply()
	{
		cout<<name<<"\t"<<"\t"<<price<<"\t"<<mno;
	}
};
class Tata:public Vehical
{
	protected:
	char fueltype[30];
	public:
		Tata(int price,int mno,char name[],char fueltype[]):Vehical( price, mno,name)
		{
			strcpy(this->fueltype,fueltype);
		}
		void Disply()
		{
		    Vehical ::Disply();
			cout<<fueltype<<"\t";
		}
};
class Mahi :public Vehical,public Tata
{
	private:
		int wheel;
		public:
		Mahi(int price,int mno,char name[],char fueltype[],int wheel):Tata( price, mno, name, fueltype)
		{
			this->wheel->wheel;
		}
		void Disply()
		{
			Vehical ::Disply();
			Tata ::Disply();
			
			cout<<wheel<<"\t";
		}
};
int main()
{
	int price,mno,wheel;
	char name[30],fueltype[30];
	cout<<"Enter price mno name and fueltype "<<endl;
	cin>>price>>mno>>name>>fueltype;
	Tata t(price,mno,name,fueltype);
	t.Disply();
	
		cout<<"Enter price mno name and fueltype "<<endl;
	cin>>price>>mno>>name>>fueltype>>wheel;
	Mahi m(price,mno,name,fueltype,wheel);
	m.Disply();
	
}
