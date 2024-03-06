#include<iostream>
using namespace std;
#include<string.h>
class STRING
{
	public:
		virtual void perform()=0;
};
class Word_Reverse :public STRING
{
	char name[30],name1[30];
	int len;
	public:
		void setData(char n[])
		{
			strcpy(name,n);
		}
		void perform()
		{
			int k,d=0;
			len=strlen(name);
			for(int i=0;i<len;i++)
			{
				k=0;
				if(name[i]==' ' || name[i]=='\0')
				{
					for(int j=i-1;j>=d;j--)
					{
						name1[k]=name[j];
						k++;
					}
				}
				name1[k]='\0';
				d=i+1;
				cout<<name1<<" ";
				
			}
		}
};
class String_Reverse :public STRING
{
	char name[30],name1[30];
	int len;
	public:
		void setData(char n[])
		{
			strcpy(name,n);
		}
		void perform()
		{
			int k,d=0;
			len=strlen(name);
			strrev(name);
				for(int i=0;i<len;i++)
			{
				k=0;
				if(name[i]==' ' || name[i]=='\0')
				{
					for(int j=i-1;j>=d;j--)
					{
						name1[k]=name[j];
						k++;
					}
				}
				name1[k]='\0';
				d=i+1;
				cout<<endl;
				cout<<name1<<" ";
				
			}
		}
};
int main()
{
	char n[30];
	cout<<"Enter any string "<<endl;
	gets(n);
	
	Word_Reverse w;
	w.setData(n);
	w.perform();
	
	String_Reverse s;
	s.setData(n);
	s.perform();
}
