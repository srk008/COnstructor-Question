#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
class ArrayOperation
{
	int *ptr,len1;
	char n[30];
	public:
	void setData(int a[],int size)
	{
		ptr=a;
		len1=size;
	}
	void operation()
	{
		int flag=1;
		for(int i=0,j=len1-1;i<(len1/2);i++,j--)
		{
			if(ptr[i]!=ptr[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"Given Array is a pailimdrom Array "<<endl;
		}
		else
		{
			cout<<"Given array is not a pailmdrom array "<<endl;
		}
	}
	void operation(char s[])
	{
		strcpy(n,s);
		int len=strlen(n),j;
		int flag=0;
		for(int i=0,j=len-1;i<(len/2);i++,j--)
		{
			if(n[i]!=n[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"Given string is not pailimdrom"<<endl;
		}
		else
		{
			cout<<"Given string is A palimdrom"<<endl;
		}
		
	}
};
int main()
{
	int size,*ptr;
	char name[30];
	cout<<"ENetr size "<<endl;
	cin>>size;
	ptr=(int*)malloc(sizeof(int)*size);
	cout<<"Enter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	cout<<"Enetr any string "<<endl;
	scanf("%s",name);
	ArrayOperation r;
	r.setData(ptr,size);
	r.operation();
	r.operation(name);
	
}
