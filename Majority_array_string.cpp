#include<iostream>
using namespace std;
#include<string.h>
class Majority
{
	int *ptr,len;
	char name[30];
	public:
	Majority(int a[],int size,char s[])
	{
		ptr=a;
		len=size;
		strcpy(name,s);
	}
	void checkmajority()
	{
		int count,flag=0,temp;
	    for(int i=0;i<len;i++)
		{
			count=0;
			for(int j=i+1;j<len;j++)
			{
				if(ptr[i]==ptr[j])
				{
					count++;
					
				}
			}
			if(count>(len/2))
			{
				flag=1;
				temp=ptr[i];
				break;
			}
		}
		if(flag==1)
		cout<<"Majority element is "<<temp<<endl;
		else
		cout<<"Majority element is not present "<<endl;	
	}	
	void most()
	{
		int count,flag=0;
		char temp;
		len=strlen(name);
	//	cout<<"String len is "<<len<<endl;
		for(int i=0;name[i]!='\0';i++)
		{
			count=1;
			for(int j=i+1;name[j]!='\0';j++)
			{
				if(name[i]==name[j])
				 count++;
				 ptr[j]=' ';
			}
		//	cout<<"Number of count is "<<count<<"ANd letter "<<name[i]<<endl;
			if(count>(len/2))
			{
				flag=1;
				temp=name[i];
				
				break;
			}
		}
		if(flag==1)
		cout<<"Majority letter is "<<temp<<endl;
		else
		cout<<"Majority Letter is not present "<<endl;
	}
};
int main()
{
	int size;
	cout<<"ENter size of array"<<endl;
	cin>>size;
	int a[size];
	char n[30];
	cout<<"ENter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter any string "<<endl;
	cin>>n;
	Majority s(a,size,n);
	s.checkmajority();
	s.most();
}
