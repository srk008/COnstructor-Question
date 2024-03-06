#include<iostream>
using namespace std;
class Operation
{
	public:
		void ArrayOperation(int a[][3],int b[][3])
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"\t"<<a[i][j]+b[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
		void ArrayOperation(int a[][3])
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
};
int main()
{
	int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[][3]={{7,8,9},{4,5,6},{1,2,3}};
	Operation o;
	o.ArrayOperation(a,b);
	o.ArrayOperation(a);
	
}
