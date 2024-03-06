#include<stdio.h>
#include<iostream>
using namespace std;
struct student
{
	int no;
	char name[30];
	int mark[5];
};
int main()
{
	struct student s[5];
	struct student temp;
	int no,mark[5];
	char name[30];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter student  name roll no and mark"<<endl;
		cin>>s[i].name>>s[i].no;
		cout<<"Enter 5 subject mark"<<endl;
		for(int j=0;j<5;j++)
		{
			cin>>mark[j];
		}
		_flushall();
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			 if(s[i].mark<s[j].mark)
			 {
			 	temp=s[i];
			 	s[i]=s[j];
			 	s[j]=temp;
			 }
		}
		
       
	}
		cout<<"Below student is topper "<<endl;
		cout<<s[0].name<<"\t"<<s[0].mark<<"\t"<<s[0].no;
		

	cout<<"\n Below student is failed "<<endl;
	for(int i=0;i<5;i++)
	{
		if(s[i].mark[i]<40)
		{
			cout<<s[i].name<<"\t"<<s[i].mark<<"\t"<<s[i].no;
		}
	}
	
	
}
