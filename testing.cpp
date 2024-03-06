#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
	int id,salary;
	char name[20],email[20];
    public:
    	
	Employee(int i,char n[],char e[],int sal)
	{
	    id=i;
		salary=sal;
		strcpy(name,n);
		strcpy(email,e);	
	}	
	int getFunction()
	{
		return salary;
	}
	void show()
	{
		cout<<id<<"\t"<<name<<"\t"<<email<<"\t"<<salary<<endl;
	}
	char *getname()
	{
		return name;
	}
};
int main()
{
	int i,sal,index;
	char n[20], e[20];
   Employee j[5]
  = {
        Employee(0, "", "", 0),
        Employee(1, "", "", 0),
        Employee(2, "", "", 0),
        Employee(3, "", "", 0),
        Employee(4, "", "", 0)
    };
  //  Employee temp;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter employee id salary name and email"<<endl;
		cin>>i>>sal>>n>>e;
		 j[i]=Employee(i,n,e,sal);
	}
	for(int i=0;i<5;i++)
	{
		for(int k=i+1;k<5;k++)
		{
			if(j[i].getFunction()<j[k].getFunction())
			{
				swap(j[i],j[k]);
//				temp=j[i];
//				j[i]=j[k];
//				j[k]=temp;
			}
		}
	}
	cout<<"Enter which largest salary Employee record you want "<<endl;
	cin>>index;
	j[index-1].show();
	
 } 
