#include<iostream>
using namespace std;
#include<string.h>
class Array
{
	int len,*ptr,temp,num,count;
	public:
		void set(int a[],int size)
		{
			ptr=a;
			len=size;
		}
		void perform()
		{
			for(int i=0;i<len;i++)
			{
				temp=ptr[i];
				num=temp;
				count=0;
				while(num!=0)
				{
					count++;
					num=num/10;
				}
				num=temp;
				int a[count],l;
				l=0;
				while(num!=0)
				{
					int digit=num%10;
					a[l]=digit;
					l++;
					num=num/10;
				}
				for(int i=0;i<count;i++)
				{
					for(int j=i+1;j<count;j++)
					{
						if(a[i]<a[j])
						{
							int temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				int res;
				res=0;
				for(int i=0;i<count;i++)
				{
					res=res*10+a[i];
				}
				ptr[i]=res;
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
	cout<<"Enter size "<<endl;
	cin>>size;
	int a[size];
	cout<<"ENter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	Array w;
	w.set(a,size);
	w.perform();
}
