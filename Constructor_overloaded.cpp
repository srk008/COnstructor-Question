#include<iostream>
#include<string.h>
using namespace std;
class Copy
{
	private:
		int mark,id;
		char name[20];
	public:
	Copy(int m,int i)
	{
	    mark=m;
		id=i;
			
	}	
	Copy(char n[])
	{
	strcpy(name,n);	
	}
	void show()
	{
		cout<<id<<"\t"<<name<<"\t"<<mark<<endl;
	}
};
int main()
{
	int i,m;
	char n[20];
	cout<<"Enter id mark and name"<<endl;
	cin>>i>>m>>n;
	Copy c(i,m);
    Copy b(n);
	c.show();
	
}
