#include<iostream>
using namespace std;
#include<string.h>
class ArrayCons
{
	int *ptr,v,len;
	public:
		
	ArrayCons (int a [],int value,int size)
	{
		int flag=0;
		ptr=a;
		v=value;
		len=size;
		for(int i=0;i<len;i++)
		{
			if(ptr[i]==v)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"Given value is present"<<endl;
		}
		else
		{
			cout<<"Given value is not present:"<<endl;
		}
		
	}
	ArrayCons(int a[] , int b[],int size)
	{
		int *fptr,*gptr,length,flag=0;
		fptr=a;
		gptr=b;
		length=size;
		for(int i=0;i<length;i++)
		{
			//flag=0;
			for(int j=0;j<length;j++)
			{
				if(fptr[i]==gptr[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				break;
			}
//			else
//			{
//				flag=0;
//				break;
//			}
		}
		if(flag==1)
		{
			cout<<"Given array are anagram"<<endl;
		}
		else
		{
			cout<<"Given array are not anagram"<<endl;
		}
		
	}
	
};
int main()
{
	int size,value;
	cout<<"ENter size"<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter value that u want to search"<<endl;
	cin>>value;
	ArrayCons p(a,value,size);
	
	int size1;
	cout<<"Enter size "<<endl;
	cin>>size1;
	int b[size1],c[size1];
	cout<<"Enter 1st array"<<endl;
	for(int i=0;i<size1;i++)
	{
		cin>>b[i];
	}
	cout<<"ENter 2nd array "<<endl;
	for(int i=0;i<size1;i++)
	{
		cin>>c[i];
	}
	ArrayCons r(a,b,size1);
}
