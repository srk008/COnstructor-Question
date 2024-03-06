#include<iostream>
using namespace std;
#include<string.h>
int size;
class Array
{
	int **ptr,**fptr;
	int len;
	public:
	void ArrayOperation(int **a,int **b,int size)
	{
		ptr=a;
		fptr=b;
		len=size;
		int **c=new int[len];
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<len;j++)
			{
				c[i][j]=ptr[i][j]+fptr[i][j];
			}
		}
		cout<<"Array after sum is"<<endl;
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<len;j++)
			{
				cout<<c[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
};
int main()
{
	int size;
	cout<<"Enter size of 2d array "<<endl;
	cin>>size;
	int **a=new int*[size];
	int **b=new int*[size];
	cout<<"Enter 1st array "<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter 2st array "<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cin>>b[i][j];
		}
	}
	Array t;
	t.ArrayOperation(a,b,size);
}
