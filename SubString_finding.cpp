#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char name[30];
	int count=0,j=0,flag,i;
	char sub[20];
	cout<<"Enter any string "<<endl;
	gets(name);
	cout<<"Enter sub String"<<endl;
	gets(sub);
	for(int z=0;name[z]!='\0';z++)
	{    flag=0;
		for(int x=0;sub[x]!='\0';x++)
		{
		
			if(name[z]==sub[x])
			{
				flag=1;
			}
		
		}
		
	}
	cout<<"The value of flag is "<<flag<<endl;
	if(flag==1)
	{
		for( i=0;name[i]!='\0';i++)
     	{
		if(name[i]==sub[j])
		{
			count=i;
			flag=1;
			for(int k=0;sub[k]!='\0';k++)
			{
				count++;
			}
			break;
		}
	}
		cout<<"Given sub String is present "<<i <<"And "<<count-1<<endl;
	}
	

	else
	cout<<"Given string is not present "<<endl;
	
}
