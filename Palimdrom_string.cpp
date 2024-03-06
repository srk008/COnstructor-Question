#include<iostream>
using namespace std;
#include<string.h>
class BHJ
{
	char name[30],rev[30];
	public:
		void setData(char name[])
		{
			strcpy(this->name,name);
		}
		void Palimdrom()
		{
			int flag=1,k=0,count=0;
			for(int i=0;name[i]!='\0';i++)
			{
				count++;
			}
			cout<<"Number of character "<<count<<endl;
			for(int i=count-1;i>=0;i--)
			{
				rev[k]=name[i];
				k++;
			}
			rev[k]='\0';
			cout<<"New array coiped "<<rev<<endl;
			for(int j=0;rev[j]!='\0';j++)
			{
				if(rev[j]!=name[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			cout<<"Given string is palimdrom "<<endl;
			else
			cout<<"Given string is not palimdrom "<<endl;
		}
};
int main()
{
	char name[30];
	cout<<"Enter any string "<<endl;
	gets(name);
	BHJ b;
	b.setData(name);
	b.Palimdrom();
}
