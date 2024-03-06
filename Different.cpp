#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char name[30];
	cout<<"Enter any name "<<endl;
	cin>>name;
	int nameCount[26]={0};
	for(int i=0;name[i]!='\0';i++)
	{
		nameCount[name[i]]++;
	}
	int index=0;
	char temp;
	for(int i=0;i<26;i++)
	{
		if(nameCount>0 && nameCount[i]>index)
		{
			index=nameCount[i];
			temp=static_cast<char>(i);
		}
	}
	cout<<"Max time occured char is "<<temp<<" how much time "<<index<<endl;
}
