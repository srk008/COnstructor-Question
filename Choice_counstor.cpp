#include<iostream>
using namespace std;
#include<string.h>
class Programming
{
	char name[20];
	public:
	
	Programming()
	{
	  cout<<"I Love Programing Langauages"<<endl;	
	}	
	Programming(char n[])
	{
		strcpy(name,n);
		cout<<"I Love "<<name<<endl;
	}
};
int main()
{
	int index;
	char nam[20];
	cout<<"Enter 1 if u want given input"<<endl;
	cin>>index;
	if(index==1)
	{
	  cout<<"Enter your string "<<endl;
	  cin>>nam;
	  Programming p(nam);	
	}
	else
	{
		Programming p;
	}
}
