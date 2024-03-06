#include<iostream>
using namespace std;
#include<string.h>
class Set
{
	protected:
	char name[20];
	public:
		set(char n[])
		{
			strcpy(name,n);
		}
		
};
class perfrom : public Set
{
	public:
		char temp;
	void operation()
	{
		
	for(int i=0;name[i]!='\0';i++)
	{
		for(int j=i+1;name[j]!='\0';j++)
		{
			if(name[i]>name[j])
			{
				temp=name[i];
				name[i]=name[j];
				name[j]=temp;
			}
		}
	}
	cout<<name<<endl;
}
};
int main()
{
	char n[20];
	cout<<"ENter any name"<<endl;
	cin>>n;
	perfrom p;
	p.set(n);
	p.operation();
}
