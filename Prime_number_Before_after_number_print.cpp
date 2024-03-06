#include<iostream>
using namespace std;
#include<string.h>
class Previous
{
	int num;
	public:
	Previous()
	{
		num=0;
	}
	Previous(int n)
	{
	 num=n;	
	}	
	void Prime()
	{
		int count;
		for(int i=num;i<num+num;i++)
		{
			count=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				cout<<"Number after prime number is "<<i<<endl;
				break;
			}
		}
	}
	void before()
	{
		int count;
		for(int i=num-1;i>0;i--)
		{
			count=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				cout<<"Before number prime number is "<<i<<endl;
				break;
			}
		}
	}
};
int main()
{
  int n;
  cout<<"Enter any number "<<endl;
  cin>>n;
  Previous p();
  Previous j(n);
  j.Prime();
  j.before();	
}
