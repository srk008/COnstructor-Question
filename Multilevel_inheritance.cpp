#include<iostream>
using namespace std;
class Set
{
	protected:
		int num1,num2;
		public:

			
	Set1(int n,int n1)
	{
	  num1=n;
	  num2=n1;	
	}	
};
class Addition : public Set
{
	protected:
	int	res;
	public:
		void add()
		{
			res=num1+num2;
			cout<<"Additon is "<<res<<endl;
		}
};
class Div : public Addition
{
	protected:
		int flag;
		public:
		void check()
		{
			flag=0;
			if(res%2==0)
			{
				flag=1;
			}
		}
};
class Show : public Div
{
	public:
		void even()
		{
			if(flag==1)
			cout<<"This number is even "<<endl;
			else
			cout<<"This number is odd "<<endl;
		}
};
int main()
{
	int n,n1;
	cout<<"Enter two numbwr :"<<endl;
	cin>>n>>n1;
    //Set s1(n,n1);
    
    Show s;
    s.Set1(n,n1);
    s.add();
    s.check();
    s.even();
		
}
