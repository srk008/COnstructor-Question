#include<iostream>
#include<string.h>
using namespace std;
class A
{
	protected:
		int *ptr,len;
	public:
	void setData1(int a[],int size)
	{
	  ptr=a;
	  len=size;	
	}
	void show()
	{
	  for(int i=0;i<len;i++)
	  {
	  	cout<<ptr[i]<<endl;
		  }	
	}	
		
	
};
class B
{
	protected:
		char s[20];
	public:	
	void setData(char n[])
	{
	   strcpy(s,n);	
	}
	void show()
	{
	  cout<<s<<endl;	
	}	
};
class D: public A,public B
{
	public:
	void call()
	{
		
	A::show();
	B::show();	
	}	
};
int main()
{
	int size;
	cout<<"Enter size "<<endl;
	cin>>size;
	int a[size];
	char n[30];
	cout<<"Enter array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter string"<<endl;
	cin>>n;
	D d;
	d.setData1(a,size);
	d.setData(n);
	d.call();
}
