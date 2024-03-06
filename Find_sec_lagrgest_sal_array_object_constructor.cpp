#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
	int id ,sal;
	char name[30],email[30];
	public:
		Employee()
		{
			
		}
		Employee(int i,int s,char n[],char e[])
		{
			id=i;
			sal=s;
			strcpy(name,n);
			strcpy(email,e);
		}
		int getSal()
		{
			return sal;
		}
		void show()
		{
			cout<<id<<"\t"<<name<<"\t"<<email<<"\t"<<sal<<endl;
		}
};
int main()
{
	int i,s;
	char n[30],e[30];
	Employee e[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter id sal name and email of email of emp "<<endl;
		cin>>i>>s>>n>>e;
		e[i]=Employee(i,s,n,e);
	}
	for(int i=0;i<5;i++)
	{
		e[i].show();
	}
	
}
