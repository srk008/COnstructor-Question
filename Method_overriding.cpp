#include<iostream>
using namespace std;
class ArrayOperation
{
	public:
	virtual void performOperation()=0;
};
class sorting:public ArrayOperation
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
			for(int i=0;i<len;i++)
			{
				for(int j=i+1;j<len;j++)
				{
					if(ptr[i]>ptr[j])
					{
						int temp=ptr[i];
						ptr[i]=ptr[j];
						ptr[j]=temp;
					}
				}
			}
			cout<<"Ascending sorting "<<endl;
			for(int i=0;i<len;i++)
			{
				cout<<ptr[i]<<endl;
			}
		}
		
};
class Deletion:public ArrayOperation
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
			int value;
			cout<<"Enter value that u want to delete "<<endl;
			cin>>value;
			for(int i=0;i<len;i++)
			{
				if(ptr[i]==value)
				{
					for(int j=i;j<len;j++)
					{
						ptr[j]=ptr[j+1];
					}
					len--;
				}
			}
			cout<<"Array after deletation"<<endl;
			for(int i=0;i<len;i++)
			{
				cout<<ptr[i]<<endl;
			}
		}
};
class Union:public ArrayOperation
{
		int *ptr,len,*ptr1;
	public:
		void setData(int a[],int b[],int size)
		{
			ptr=a;
			ptr1=b;
			len=size;
		}
		void performOperation()
		{
			int c[len+len],k=0;
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
					c[k]=ptr[i];
					k++;
					
				}
			}
			for(int i=0;i<len;i++)
			{
				int flag=1;
				for(int j=0;j<len;j++)
				{
					if(ptr1[i]==ptr[j] )
					{
					   flag=0;
					   break;
					}
				}
				if(flag==1)
				{
					c[k]=ptr1[i];
					k++;
				}
		    }
		    cout<<"Array After union "<<endl;
		    for(int i=0;i<k;i++)
		    {
		    	cout<<c[i]<<endl;
			}
		}
};
int main()
{
	int size;
	cout<<"Enter size of array "<<endl;
	cin>>size;
	int a[size];
	int b[size];
	cout<<"Enter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter 2nd array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>b[i];
	}
	
	Union u;
	u.setData(a,b,size);
	u.performOperation();
	
	Deletion d;
	d.setData(a,size);
	d.performOperation();
	
	sorting s;
	s.setData(a,size);
	s.performOperation();
	
	
}
