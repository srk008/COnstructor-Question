#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
	int id, sal;
	char  name[30], email[30];
	public:
		Employee (int i,int s,char n[],char e[])
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
};
int main()
{
	int i, s,size;
	char n[20], e[20];
	cout<<"ENter how many recourd u want to store"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{	
	cout<<"Enter employee id salary name  and email"<<endl;
	cin>>i>>s>>n>>e;
   	Employee e(i,s,n,e);
	}
	for(int i=0;i<size;i++)
	{
     		
	}
   
} 
