#include<iostream>
using namespace std;
class Secound_max
{
	int *ptr,len;
	public:
		void setData(int a[],int size)
		{
			ptr=a;
			len=size;
		}
		void performOperation()
		{
			int max,min;
			max=ptr[0];
			for(int i=0;i<len;i++)
			{
				for(int j=0;j<len;j++)
				{
					if(ptr[i]>max)
					{
						min=max;
						max=ptr[i];
					}
				}
			}
			cout<<"Largest element is "<<max<<endl;
			cout<<"2nd Largest element is "<<min<<endl;
		}
};
int main()
{
	int size;
	cout<<"Enter size of array "<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter array element "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	Secound_max s;
	s.setData(a,size);
	s.performOperation();
	
}
