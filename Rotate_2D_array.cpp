#include<iostream>
using namespace std;
int main()
{
	int row,col,temp;
	cout<<"Enter row and coloum :";
	cin>>row>>col;
	int a[row][col];
	cout<<"Enter array elements :"<<endl;
	for(int i=0;i<row;i++)
	{
		f
		or(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(int i=0;i<row/2;i++)
	{
		for(int j=i;j<row-1-i;j++)
		{
			temp=a[i][j];
			a[i][j]=a[row-1-j][i];
			a[row-1-j][i]=a[row-1-i][row-1-j];
			a[row-1-i][row-1-j]=a[j][row-1-i];
			a[j][row-1-i]=temp;
		}
	}
	cout<<"Array become after rotate :"<<endl;
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
