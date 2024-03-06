#include<iostream>
using namespace std;
#include<string.h>
class Print
{
	int *ptr,*ptr1,len;
	public:
		void set(int a[],int b[],int size)
		{
			ptr=a;
			ptr1=b;
			len=size;
		}
		void vperform()
		{
			int c[len+len];
			int i=0,j=len-1,k=0;
			for(i=0,j=len-1;i<len;i++,j--)
			{
				c[k]=ptr[i];
				k++;
				c[k]=ptr1[j];
				k++;
			//	cout<<ptr[i]<<" "<<ptr1[j]<<" ";
			}
			for(int i=0;i<len+len;i++)
			{
				cout<<c[i]<<endl;
			}
		}
};
int main()
{
	int size;
	cout<<"ENter size of array "<<endl;
	cin>>size;
	int a[size],b[size];
	cout<<"ENter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter 2nd array "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>b[i];
	}
	Print p;
	p.set(a,b,size);
	p.vperform();
}
