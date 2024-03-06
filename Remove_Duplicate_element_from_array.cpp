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
class RemoveDuplicate :public Duplicate
{
	public:
		void Remove()
		{
			int l=len;
			for(int i=0;i<len;i++)
			{
				for(int j=i+1;j<len;j++)
				{
					if(ptr[i]==ptr[j])
					{
						for(int k=j;k<len;k++)
						{
							ptr[k]=ptr[k+1];
						}
						l--;
					}
				}
			}
			for(int i=0;i<l;i++)
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
	cout<<"Enter arary element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
    RemoveDuplicate r;
	r.setData(a,size);
	r.Remove();	
}
