#include<iostream>
using namespace std;
#include<string.h>
class ArrayOperation
{
	public:
		virtual void performOperation()=0;
};
class Unique :public ArrayOperation
{
	int *ptr,len;
	public:
	void setData(int a[],int size)
	{
		ptr=a;
		len=size;
	}
	void performOperation()
	{
		cout<<"Array unique element s"<<endl;
		for(int i=0;i<len;i++)
		{
			int flag=1;
			for(int j=0;j<len;j++)
			{
				if(ptr[i]==ptr[j] && i!=j)
				{
				  flag=0;
				  break;	
				}
			}
			if(flag==1)
			{
				cout<<ptr[i]<<endl;
			}
		}
	}
};
int main()
{
	int size;
	cout<<"Enter array size"<<endl;
	cin>>size;
	int a[size];
	cout<<"ENter arary element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	Unique u;
	u.setData(a,size);
	u.performOperation();
}
