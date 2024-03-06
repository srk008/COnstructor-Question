#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
class AddApp
{
	int *fptr,len;
	public:
	void setData(int *ptr,int size)
	{
		fptr=ptr;
		len=size;
	}
	void performoperation()
	{
		int sum=0;
		for(int i=0;i<len;i++)
		{
			sum=sum+fptr[i];
		}
		cout<<"Sum of all element is "<<sum;
	}
};
int main()
{
	int size,*ptr;
	cout<<"ENter size of array"<<endl;
	cin>>size;
	ptr=(int *)malloc(sizeof(int)*size);
	cout<<"Enter array elemenrt "<<endl;
	for(int i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	AddApp a;
	a.setData(ptr,size);
	a.performoperation();
}
