#include<iostream>
using namespace std;
class TwoD
{
	int **ptr,row,col;
	public:
		void set(int a,int r,int c)
		{
			ptr=a;
			row=r;
			col=c;
		}
		void Find()
		{
			int min,max;
			min=ptr[0][0];
			max=ptr[0][0];
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					if(max<ptr[i][j])
					{
						max=ptr[i][j];
					}
					if(min>ptr[i][j])
					{
						min=ptr[i][j];
					}
				}
			}
			cout<<"Maximum number is "<<max<<endl;
			cout<<"Minium number is "<<min<<endl;
		}
};
int main()
{
	int r,c;
	cout<<"Enter row and col :"<<endl;
	cin>>r>>c;
	int **a=new int*[r];
	int k=0;
	a[k]=new int[c];
	cout<<"Enter array element "<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	TwoD s;
	s.set(a,r,c);
	s.Find();
}
