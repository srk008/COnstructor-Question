#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
class StringOperation
{
	public:
		virtual void performOperation()=0;
};
class Max:public StringOperation
{
	char n[20],temp;
	int len,index=0,flag;
	public:
		void set(char name[])
		{
			strcpy(n,name);
		}
	void performOperation()
	{
	 	len=strlen(n);
	 	for(int i=0;i<len;i++)
	 	{
	 		flag=1;
	 		for(int j=i+1;j<len;j++)
	 		{
	 			if(i!=j && n[i]==n[j])
	 			{
	 				flag++;
	 			
				 }
			 }
			 if(index<flag)
			 {
			 	temp=n[i];
			 	index=flag;
			 }
			   if(index==flag)
			   {
			   	
			   }
		 }
		 cout<<"Maximum time occured character is "<<temp<<"times "<<index<<endl;
	}	
};
class rt
{
	char z[20],w[20];
	int len1,m,d=0,j;
	public:
		void setData(char name1[])
		{
			strcpy(z,name1);
		}
	void performOperation()
	{
		len1=strlen(z);
		strrev(z);
	   for(int i=0;i<len1;i++)
	   {
	   	   if(z[i]==' ' || z[i]=='\0')
	   	   {
	   	   	
	   	   	   m=0;
	   	   	    for( j=i-1;j>=d;j--)
	   	   	   {
	   	   	   	     cout<<z[j]; 
	   	   		      
				  }
				   cout<<" ";
				  	d=i+1;
				  	
			}
		
		
		}	
	}	
};
int main()
{
	char name[20],name1[20];
	cout<<"Enter any name"<<endl;
	cin>>name;
	Max m;
	m.set(name);
	m.performOperation();
	cout<<"Enter any string"<<endl;
	_flushall();
	gets(name1);
	rt t;
	t.setData(name1);
	t.performOperation();
}

