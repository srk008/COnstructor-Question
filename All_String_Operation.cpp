#include<iostream>
using namespace std;
#include<string.h>
class StringOperation
{
  public:
  virtual void performOperation()=0;	
};
class Sorting:public StringOperation
{
	char name[30],temp;
	int len;
	public:
		void setData(char n[])
		{
			strcpy(name,n);
		}
		void performOperation()
		{
			len=strlen(name);
			for(int i=0;i<len;i++)
			{
				for(int j=i+1;j<len;j++)
				{
					if(name[i]>name[j])
					{
						temp=name[i];
						name[i]=name[j];
						name[j]=temp;
					}
				}
			}
			cout<<"Sting sorting ascending order "<<endl;
			cout<<name<<endl;
		}
};
class count:public StringOperation
{
	char name[30];
	int len,al=0,d=0,s=0;
	public:
		void setData(char n[])
		{
			strcpy(name,n);
		}
		void performOperation()
		{
			len=strlen(name);
			for(int i=0;i<len;i++)
			{
				if(name[i]>='A' && name[i]<='Z' || name[i]>='a' && name[i]<='z')
				{
					al++;
				}
				else if(name[i]>='0' && name[i]<='9')
				{
					d++;
				}
				else
				{
					s++;
				}
			}
			cout<<"Number of Character are present "<<al<<endl;
			cout<<"Number of digit are present is "<<d<<endl;
			cout<<"Number of special character present are "<<s<<endl;
		}
};
class DigitSum:public StringOperation
{
		char name[30];
		int len;
	public:
		void setData(char n[])
		{
			strcpy(name,n);
		}
		void performOperation()
		{
			int num=0,sum=0;
			len=strlen(name);
			for(int i=0;i<len;i++)
			{
				if(name[i]>='0' && name[i]<='9')
				{
					num=num*10+name[i]-48;
				}
				else
				{
					sum=sum+num;
					num=0;
				}
			}
			
			cout<<"Sum of all number is "<<sum<<endl;
		}
	
};
class Isogram:public StringOperation
{
		char name[30];
		int len;
	public:
		void setData(char n[])
		{
			strcpy(name,n);
		}
		void performOperation()
		{
			len=strlen(name);
			int flag=1;
			for(int i=0;i<len;i++)
			{
				for(int j=0;j<len;j++)
				{
					if(name[i]==name[j] && i!=j)
					{
						flag=0;
						break;
					}
				}
				
			}
			if(flag==1)
			{
				cout<<"You entered string is an isogram "<<endl;
			}
			else
			{
				cout<<"You entered string is not a isogram "<<endl;
			}
			
		}
};
class Anagram :public StringOperation
{
	char name[30],name1[30];
	int len,len1;
	public:
		void setData(char n[],char m[])
		{
			strcpy(name,n);
			strcpy(name1,m);
		}
		void performOperation()
		{
			int flag=0;
			len=strlen(name);
			len1=strlen(name1);
			for(int i=0;i<len;i++)
			{
				for(int j=0;j<len1;j++)
				{
					if(name[i]==name1[j])
					{
						flag=1;
						break;
					}
				}
				if(flag==1)
				{
					continue;
				}
			}
			if(flag==1)
			{
				cout<<"Given string is an anagram "<<endl;
			}
			else
			{
				cout<<"Given string is not a anagram string "<<endl;
			}
		}	
};
int main()
{
	char n[30],m[30];
	cout<<"Enter any string "<<endl;
	cin>>n;
	cout<<"ENter another string "<<endl;
	cin>>m;
	
	Sorting s;
	s.setData(n);
	s.performOperation();
	
	count c;
	c.setData(n);
	c.performOperation();
	
	DigitSum d;
	d.setData(n);
	d.performOperation();
	
	Isogram i;
	i.setData(n);
	i.performOperation();
	
	Anagram a;
	a.setData(n,m);
	a.performOperation();
	
}
