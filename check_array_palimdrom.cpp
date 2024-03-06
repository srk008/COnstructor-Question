#include<iostream>
using namespace std;
#include<string.h>
class Palindrom
{
	int *ptr,len,len1;
	char ch[30];
	public:
		void setData(int a[],int size,char n[])
		{
			ptr=a;
			len=size;
			strcpy(ch,n);
		}
		void performoperation()
		{
			int j,flag=1;
			for(int i=0,j=len-1;i<(len/2);i++,j--)
			{
				if(ptr[i]!=ptr[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			cout<<"Array is pailmdrom"<<endl;
			else
			cout<<"Array is not pailmdrom"<<endl;
			
		}
		void performoperation1()
		{
			len1=strlen(ch);
			int j,flag=1;
			for(int i=0,j=len1-1;i<(len1/2);i++,j--)
			{
				if(ch[i]!=ch[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			cout<<"Given word is pailmdrom"<<endl;
			else
			cout<<"Given word is not pailmdrom"<<endl;
		}
};
int main()
{
	int a[5],size=5;
	char n[30];
	cout<<"Enetr 5 number of array "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter any word "<<endl;
	cin>>n;
	Palindrom p;
	p.setData(a,size,n);
	p.performoperation();
	p.performoperation1();
}
