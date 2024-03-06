#include<iostream>
using namespace std;
#include<string.h>
class ArrayOperation 
{
	public:
		virtual void  performOperation()=0;
};
class Value 
{
	protected:
		int *ptr,*ptr1,len;
		public:
	void setvalue(int a[],int b[],int size)
	{
		ptr=a;
		ptr1=b;
		len=size;
	}	
};
class Unique : public ArrayOperation,public Value 
{
	public:
	void  performOperation()
	{
		int c[len];
		for(int i=0;i<len;i++)
		{
			for(int j=i+1;j<len;j++)
			{
				if(ptr[i]==ptr[j])
				{
					ptr[j]=' ';
				//	c[k]=ptr[i];
				}
			}
		}
		cout<<"Value after unique"<<endl;
		for(int i=0;i<len;i++)
		{
			cout<<ptr[i]<<endl;
		}
	}	
		
		
};
class MergeArray : public ArrayOperation ,public Value 
{
	public:
	void performOperation()
		{
		   int c[len+len],k=0;
		   for(int i=0;i<len;i++)
		   {
		   	 c[k]=ptr[i];
		   	 k++;
			}	
			for(int i=0;i<len;i++)
			{
				c[k]=ptr1[i];
				k++;
			}
			cout<<"Array After Marge "<<endl;
			for(int i=0;i<len+len;i++)
			{
				cout<<c[i]<<endl;
			}
		}
};
int main()
{
	int size,z;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int a[size],b[size];
	cout<<"Enter 1st array "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter 2nd array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>b[i];
	}
	MergeArray m;
	m.setvalue(a,b,size);
Unique d;
   d.performOperation();
	m.performOperation();
}
