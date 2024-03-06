#include<iostream>
using namespace std;
class Doctor
{
	int *ptr;
	int pay,payable;
	public:
		Doctor()
		{
			pay=0;
		}
		void perfrome(int a[])
		{
			ptr=a;
			for(int i=0;i<20;i++)
			{
				if(ptr[i]>0 && ptr[i]<120)
				{
					if(ptr[i]<17)
					{
						pay=200;
					}
					else if(ptr[i]>=17 && ptr[i]<=40)
					{
						pay=400;
					}
					else
					{
						pay=300;
					}
				}
				else
				{
					cout<<"Plz Enter valid ages "<<endl;
				}
				payable=payable+pay;
			}
			cout<<"Your bill is "<<payable<<endl;
		}
};
int main()
{
	int a[20];
	cout<<"Enter 20 ages of the paitient "<<endl;
	for(int i=0;i<20;i++)
	{
		cin>>a[i];
	}
	Doctor doctor;
	doctor.perfrome(a);
}
