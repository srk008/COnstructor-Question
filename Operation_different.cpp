#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
class Operation
{
	int id,salary;
	char name[30],email[30];
	public:
		void setData(int i,char n[],char em[],int sal)
		{
			id=i;
			salary=sal;
			strcpy(name,n);
			strcpy(email,em);
		}
		void display()
		{
			cout<<id<<"\t"<<name<<"\t"<<email<<"\t"<<salary<<endl;
		}
		char *getname()
		{
			return name;
		}
	    int getId()
	    {
	    	return id;
		}
};
int main()
{
	int im, sal,size;
	char n[30], em[30];
	Operation *p;
	cout<<"Enter how many recourd u want to store"<<endl;
	cin>>size;
	p=(Operation*)malloc(sizeof(Operation)*size);
	for(int i=0;i<size;i++)
	{
	 	cout<<"Enter emp id name email salary "<<endl;
		 cin>>im>>n>>em>>sal;
		 p[i].setData(i,n,em,sal);	
	}
	for(int i=0;i<size;i++)
	{
		p[i].display();
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(strcmp(p[i].getname(),p[j].getname())==0)
			{
				p[i].display();
			}
		}
	}
	cout<<"Enter emp id whose whole record u want to update :"<<endl;
	cin>>im;
	for(int i=0;i<size;i++)
	{
		if(p[i].getId()==i)
		{
		cout<<"Enter emp id name email salary "<<endl;
		 cin>>im>>n>>em>>sal;
		 p[i].setData(im,n,em,sal);	
		}
	}
	for(int i=0;i<size;i++)
	{
		p[i].display();
	}
}

