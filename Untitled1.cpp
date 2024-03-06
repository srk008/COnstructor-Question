#include<iostream>
using namespace std;
#include<string.h>
class check
{
	private:
		int *ptr,len;
	public:
	void setdata(int a[],int size)
	{
		ptr=a;
		len=size;
	}
	void unique()
	{
		int flag;
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<len;j++)
			{
				flag=1;
				if(i!=j && ptr[i]==ptr[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				cout<<ptr[i]<<endl;
			}
		}
	}	
	
};
class string1
{
	private:
		char n[20],k[20];
	public:
	void set(char name[])
	{
		strcpy(n,name);
		strcpy(k,name);
	}
	void operation()
	{
		int index,count;
		char temp;
		for(int i=0;n[i]!='\0';i++)
		{
			count=1;
			for(int j=i+1;k[j]!='\0';j++)
			{
				if(n[i] == k[j])
				{
					count++;
				}
			}
			if(index<count)
			{
				temp=n[i];
				index=count;
			}
		}
		cout<<" More time character occuerd is "<<temp<<"\t"<<index<<endl;
		
	}	
};
int main()
{
	int size;
	cout<<"ENter size "<<endl;
	cin>>size;
	int a[size];
	char name[20];
	cout<<"Enter array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter name"<<endl;
	cin>>name;
	check c;
	c.setdata(a,size);
	c.unique();
	string1 s;
	s.set(name);
	s.operation();
}
