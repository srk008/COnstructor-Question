#include<iostream>
using namespace std;
#include<string.h>
class App
{
	int *ptr,len,index;
	public:
		void set(int arr[],int size,int ind)
		{
			ptr=arr;
			len=size;
			index=ind;
		}
	void rotate()
	{
		int a[len],k=0;
		for(int i=index;i<len;i++)
		{
			a[k]=ptr[i];
			k++;
		}
		for(int i=0;i<index;i++)
		{
			a[k]=ptr[i];
			k++;
		}
		cout<<"Array after rotate "<<endl;
		for(int i=0;i<len;i++)
		{
			cout<<a[i]<<endl;
		}
	}	
};
int main()
{
	int size,ind;
	cout<<"Enter array size"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter index from that u want to rotate "<<endl;
	cin>>ind;
	App a;
	a.set(arr,size,ind);
	a.rotate();
	
}
