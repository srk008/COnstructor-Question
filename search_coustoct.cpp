#include<iostream>
using namespace std;
#include<string.h>
class StringApp 
{
	char name[20],key;
	public:
	StringApp(char n[],char ch)
	{
	  strcpy(name,n);	
	  key=ch;
	}	
	void performOperation()
	{
		int flag=0;
		char a,b;
		for(int i=0;name[i]!='\0';i++)
		{
			if(key==name[i])
			{
				a=name[i-1];
				b=name[i+1];
				break;
			}
		}
		cout<<a<<"\t"<<b<<endl;
	}
};
int main()
{
	char n[20],ch;
	cout<<"Enter any string"<<endl;
	cin>>n;
	cout<<"Enter the search value"<<endl;
	cin>>ch;
	
	StringApp d(n,ch);
	d.performOperation();
	
}
