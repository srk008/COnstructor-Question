#include<iostream>
using namespace std;
#include<string.h>
class ArrayOperation 
{
	public:
		virtual void  performOperation()=0;
};
//class Value 
//{
//	protected:
//		int *ptr,*ptr1,len;
//		public:
//	void setvalue(int a[],int b[],int size)
//	{
//		ptr=a;
//		ptr1=b;
//		len=size;
//	}	
//};
class Unique : public ArrayOperation 
{
	private:
		int *ptrw,z;
		public:
		void set(int a[],int size)
		{
			ptrw=a;
			z=size;
		}
	public:
	void  performOperation()
	{
		int flag;
		int k=0;
		for(int i=0;i<z;i++)
		{
		bool isDuplicate = false;
			for(int j=0;j<z;j++)
			{
				if(i!=j && ptrw[i]==ptrw[j])
				{
			  	    cout<<"Checking is gogong on"<<endl;
				   
				     isDuplicate=true;
				break;
				   
				}
				
			}
			if(!isDuplicate)
			{
			cout<<"Element is present "<<endl;	
			cout<<ptrw[i]<<endl;
			}
			
		}
//		cout<<"Value after unique"<<endl;
//		for(int d=0;d<k;d++)
//		{
//			//cout<<"Hi"<<endl;
//			cout<<c[d]<<endl;
//		}
	}	
		
		
};
/*class MergeArray : public ArrayOperation 
{
	int *op,*ui,h,r;
	public:
		void setvalue(int a[],int b[],int size)
		{
			op=a;
			ui=b;
			h=size;
			r=size;
		}
	void performOperation()
		{
			
		   int c[h+h],k=0,j=0,m=0,n=0;
		  if(j<h)
		  {
		  	if(j%2!=0)
		  	{
		  		c[k]=op[n];
		  		n++;
		  		k++;
			  }
			  else
			  {
			  	c[k]=ui[h];
			  	h--;
			  	k++;
			  }
			  j++;
		  }
		cout<<"Array After Marge "<<endl;
			for(int i=0;i<r+r;i++)
			{
				cout<<c[i]<<endl;
			}
		}
};*/
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
//	cout<<"Enter 2nd array"<<endl;
//	for(int i=0;i<size;i++)
//	{
//		cin>>b[i];
//	}
/*	MergeArray m;
	m.setvalue(a,b,size);
	m.performOperation();*/
	
   Unique d;
   d.set(a,size);
   d.performOperation();
}
