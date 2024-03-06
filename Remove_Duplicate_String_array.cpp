#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char name[30],k=0,i,j;
	cout<<"Enter any string "<<endl;
	gets(name);
	int len=strlen(name);
	for( i=0;i<len;i++)
	{
		for( j=0;j<i;j++)
		{
			if(name[i]==name[j] )
			{
				break;
			}
		}
		if(i==j)
		{
		 name[k]=name[i+1];
		 k++;
		
		}
	
	}
	name[k]='\0';
	cout<<name<<endl;
}
