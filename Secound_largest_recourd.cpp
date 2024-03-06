#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
	int id,salary;
	char name[30],email[30];
	public:
		Employee()
		{
			
		}
		Employee(int i,int s,char n[],char e[])
		{
          id=i;
		  salary=s;
		  strcpy(name,n);
		  strcpy(email,e);			
		}
		int getsalary()
		{
			return salary;
		}
		void show()
		{
			cout<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<email<<endl;
		}
};
int main()
{
	int i, s,value;
	char n[30], e[30];
	Employee e1[5];
	for(int i=0;i<5;i++)
	{
	cout<<"Enter Employee id salary name and email"<<endl;
     cin>>i>>s>>n>>e;
	 e1[i]=Employee(i,s,n,e);		
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(e1[i].getsalary()<e1[j].getsalary())
			{
				Employee temp=e1[i];
				e1[i]=e1[j];
				e1[j]=temp;
				
			}
		}
	}
	cout<<"Enter which higest salary record u want to dispaly "<<endl;
	cin>>value;
    e1[value-1].show();
}
