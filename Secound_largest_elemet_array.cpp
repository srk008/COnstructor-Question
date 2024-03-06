#include<iostream>
using namespace std;
int main(){
	int size,max,min;
	cout<<"Enter array size "<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(int i=1;i<size;i++)
	{
		if(max<a[i])
		{
			min=max;
			max=a[i];
		}
	}
	cout<<"2nd largest element is "<<min<<endl;
}
