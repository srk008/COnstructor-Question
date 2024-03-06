#include<iostream>
using namespace std;
#include<string.h>
int row,col;
class Findelement
{
	 int **ptr;
	 public:
	 void set(int **b)
	 {
	 	ptr=b;
	 }
	void check()
	{
		int num,flag;
		cout<<"ENter number that u want to search "<<endl;
		cin>>num;
		for(int i=0;i<row;i++)
		{
			flag=0;
			for(int j=0;j<col;j++)
			{
				if(ptr[i][j]==num)
				{
					flag=1;
					break;
				}
			
			}
		}
		if(flag==1)
		cout<<"Given number is present "<<endl;
		else
		cout<<"Given number is not present "<<endl;
	}	 	
};
int main()
{
	//int col;
	cout<<"Enter row and coloum"<<endl;
	cin>>row>>col;
//	int a[row][col];
      int **a = new int*[row];
     // cout<<"ENter number of coloums "<<endl;
     int i=0;
        a[i] = new int[col];
    
	cout<<"ENter array element "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	Findelement f;
	f.set(a);
	f.check();
	
}
