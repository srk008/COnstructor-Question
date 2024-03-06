#include<iostream>
using namespace std;
#include<stdlib.h>
class Count
{
	protected:
	int *a,len;
	public:
		void setData(int p[],int size)
		{
			a=p;
			len=size;
		}
};
class Find:public Count
{
	public:
	void perform()
	{
		int num,temp;
		cout<<"Enter any number i will give you difference number"<<endl;
		cin>>num;
		for(int i=0;i<len;i++)
		{
			temp=a[i];
			for(int j=i+1;j<len;j++)
			{
				if(a[i]-a[j]==num)
				{
					cout<<"I am gone to print value "<<endl;
					cout<<"Pair is "<<a[i]<<" And "<<a[j]<<endl; 
				}
			}
		}
	}
};
int main()
{
	int size;
	cout<<"ENter size of array"<<endl;
	cin>>size;
	int p[size];
	cout<<"enter array elemnet "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	Find f;
	f.setData(p,size);
	f.perform();
}
