#include<iostream>
using namespace std;
int main()
{
	int size,temp,value;
	cout<<"Enter size"<<endl;
	cin>>size;
	int a[size],b[size];
	cout<<"Enetr array element  "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Enter which higest element you want "<<endl;
	cin>>value;
	cout<<" "<<value<<"Number is "<<a[value-1]<<endl;
}
