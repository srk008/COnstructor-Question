#include<iostream>
using namespace std;
#include<string.h>
class Student
{
	private:
   char name1[20],*name;
   int *a,*end,len;
   public:
   Student(char n[])
   {
   	strcpy(name1,n);
   	name=n;
	}
	Student(int arr[],int size)
	{
		len=size;
		a=arr;
		end=arr;
	}
	void checkstring()
	{
		int size,i,j,flag=1;
		size=strlen(name);
		for(i=0,j=size-1;i<(size/2);i++,j--)
		{
			if(name1[i]=!name[j])
			{
				cout<<"Size of given string is "<<size<<endl;
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<"Given String is palimdrom"<<endl;
		else
		cout<<"Given String is not palindrom"<<endl;
	}	
	void checkarray()
	{
		int flag=1,j=len;
		for(int i=0;i<(len/2);i++,j--)
		{
			if(a[i]=!end[j])
			{
				cout<<a[i]<<"\t"<<end[j];
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<"Given array is plimdrom"<<endl;
		else
		cout<<"Given array is not Palimdrom"<<endl;
	}
};
int main()
{
	int size;
	char n[20];
	cout<<"ENter size of array"<<endl;
	cin>>size;
	int a[size];
	cout<<"ENter array element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter any string"<<endl;
	cin>>n;
	Student s(a,size);
	Student s1(n);
	s1.checkstring();
	s.checkarray();
}
