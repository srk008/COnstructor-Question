#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
	int id,sal;
	char name[30],email[30];
	public:
		Employee(){
		}
	Employee(int i,int s,char n[],char e[])
	{
		id=i;
		sal=s;
		strcpy(name,n);
		strcpy(email,e);
	}
	int getsal()
	{
		return sal;
	}
	void show()
	{
		cout<<id<<"\t"<<sal<<"\t"<<name<<"\t"<<email<<endl;
	}
	
};
int main()
{
	int i, s,index;
	char n[30] ,e[30];
	Employee k[5];// ={
//	{0,0," "," "},
//	{0,0," "," "},
//	{0,0," "," "},
//	{0,0," "," "},
//	{0,0," "," "}
//	};
	for(int i=0;i<5;i++)
	{
	cout<<"Enter employee id salary name and email"<<endl;
	cin>>i>>s>>n>>e;
	k[i]=Employee(i,s,n,e);	
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(k[i].getsal()<k[j].getsal())
			{
				Employee temp= k[i];
				k[i]=k[j];
				k[j]=temp;
			//	swap(k[i],k[j]);
			}
		}
	}
	cout<<"Enter which largest salary record you want to display "<<endl;
	cin>>index;
	k[index-1].show();
}
