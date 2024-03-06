#include<iostream>
using namespace std;
#include<string.h>
class String
{
	public:
		virtual void performOperation()=0;
};
class Aanagram: public String
{
	char n[30],m[30];
	public:
	void setData(char name[],char name1[])
	{
		strcpy(n,name);
		strcpy(m,name1);
	}
	void  performOperation()
	{
		int flag;
		for(int i=0;i<strlen(n);i++)
		{
			flag=0;
			for(int j=0;j<strlen(m);j++)
			{
				if(n[i]==m[j])
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
			cout<<"Given string Is an Anagram"<<endl;
		}
		else
		{
			cout<<"Given string is not an anagram "<<endl;
		}
		
	}
	
};
class Isogram: public String
{
	char j[30];
	public:
		void setData(char name[])
		{
			strcpy(j,name);
		}
		void performOperation()
		{
			int flag;
			for(int i=0;i<strlen(j);i++)
			{
				flag=1;
				for(int k=i+1;k<strlen(j);k++)
				{
					if(j[i]==j[k])
					{
						flag=0;
						break;
					}
				}
				if(flag==0)
				{
					break;
				}
			}
			if(flag==0)
			{
				cout<<"Given string is not isogream"<<endl;
			}
			else
			{
				cout<<"Given string is a isogream"<<endl;
			}
		}
};
class DigitSum :public String
{
     char w[30];
	 public:
	 void setData(char name1[])
	 {
	 	strcpy(w,name1);
		 }	
	void performOperation()
		 {
		 	int sum,res=0;
		 	for(int i=0;i<strlen(w);i++)
		 	{
		 	
		 		if(w[i]>='0' && w[i]<='9')
		 		{
		 			sum=sum*10+w[i]-48;
				 }
				 else
				 {
				 	res=res+sum;
				 		sum=0;
				 }
			 }
			 cout<<"The sum of all digit is "<<res<<endl;
		 }
};
int main()
{
	char name[30];
	char name1[30],b[30];
	cout<<"Enter 1st string "<<endl;
	cin>>name;
	cout<<"Enetr 2nd String "<<endl;//Anangram string means heart earth
	cin>>name1;
	Aanagram a;
	a.setData(name,name1);
	a.performOperation();
	Isogram i;
	i.setData(name);
	i.performOperation();
	
	cout<<"Enetr another string "<<endl;
	cin>>b;
	DigitSum d;
	d.setData(b);
	d.performOperation();
}	
