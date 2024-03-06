#include<iostream>
using namespace std;
class Duplicate
{
	protected:
   int *ptr,len;
   public:
   void setData(int a[],int size)
   {
   	   ptr=a;
   	   len=size;
   	
	}	
};
class RemoveDuplicate:public Duplicate
{
	public:
	void performOperation()
	{
		for(int i=0;i<len;i++)
		{
			for(int j=i+1;j<len;j++)
			{
				if(ptr[i]==ptr[j])
				{
					for(int k=i;k<len;k++)
					{
						ptr[k]=ptr[k+1];
					}
					len--;
				}
			}
		}
		for(int i=0;i<len;i++)
		{
			cout<<ptr[i]<<endl;
		}
	}
};
int main()
{
   int size;
   cout<<"Enter size of array "<<endl;
   cin>>size;
   int a[size];
   cout<<"Enter array element "<<endl;
   for(int i=0;i<size;i++)
   {
   	 cin>>a[i];
	}	
	RemoveDuplicate r;
	r.setData(a,size);
	r.performOperation();
}
