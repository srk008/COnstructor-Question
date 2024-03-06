#include<iostream>
using namespace std;
#include<stdlib.h>
class Smallest_Missing
{
	int *ptr,len;
	public:
		void setData(int *a,int size)
		{
			ptr=a;
			len=size;
		}
		void performoperation()
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
			for(int i=0;i<len;i++)
			{
				for(int j=ptr[i]+1;j<ptr[i+1];j++)
				{
					cout<<"Smallest missing element is "<<endl;
					cout<<j<<endl;
					//break;
				}
			}
		}
};
int main()
{
	int size,*p;
	cout<<"Enter size of array "<<endl;
	cin>>size;
    p=(int*)malloc(sizeof(int)*size);
    cout<<"Enter array elements"<<endl;
	for(int i=0;i<size;i++)
	{
		scanf("%d",&p[i]);
	 } 
	 Smallest_Missing r;
	 r.setData(p,size);
	 r.performoperation();
}

