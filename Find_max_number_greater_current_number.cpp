#include<iostream>
using namespace std;
#include<stdlib.h>
class Next
{
	int *ptr,len;
	public:
	void setData(int *p,int size)
	{
		ptr=p;
		len=size;
	}
	void perform()
	{
		int max;
		for(int i=0;i<len;i++)
		{
			max=ptr[i];
			for(int j=i+1;j<len;j++)
			{
				if(max<ptr[j])
				{
					max=ptr[j];
					break;
				}
			}
			cout<<max<<endl;
		}
	}
	
};
int main()
{
	int size,*p;
	cout<<"Enter size of array "<<endl;
	cin>>size;
	p=(int*)malloc(sizeof(int)*size);
	cout<<"Enetr array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	Next n;
	n.setData(p,size);
	n.perform();
}
