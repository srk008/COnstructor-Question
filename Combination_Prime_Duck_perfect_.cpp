#include<iostream>
using namespace std;
class Value
{
	public:
   virtual void checknumber(int num)=0;	
};
class prime:public Value
{
	public:
		void checknumber(int num)
		{
				int num1,count=0;
			num1=num;
			for(int i=1;i<=num1;i++)
			{
				if(num1%i==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				cout<<"Given number is prime number "<<endl;
			}
			else
			cout<<"Given number is not prime number "<<endl;
		}
};
class perfect:public Value
{
	public:
		void checknumber(int num)
		{
			int num1,sum;
			num1=num;
			for(int i=1;i<num1;i++)
			{
				if(num1%i==0)
				{
					sum=sum+i;
				}
			}
			if(sum==num1)
			cout<<"Given number is perfect number "<<endl;
			else
			cout<<"Given number is not perfect number"<<endl;
		}
};
class Duck:public Value
{
	public:
		void checknumber(int num)
		{
				int num1,flag=0;
			num1=num;
			int digit;
			while(num1!=0)
			{
				digit=num1%10;
				if(digit==0)
				{
					flag=1;
					break;
				}
				num1=num1/10;
			}
			if(flag==1)
			cout<<"Given number is duck number "<<endl;
			else
			cout<<"Given number is not duck number"<<endl;
		}
};
class strong:public Value
{
	public:
		void checknumber(int num)
		{
				int num1,temp;
			num1=num;
			int sum=1,sum1=0;
			temp=num1;
			while(num!=0)
			{
				int digit=num%10;
				for(int i=1;i<=digit;i++)
				{
					sum=sum*i;
				}
				sum1=sum1+sum;
				num1=num1/10;
			}
			if(temp==sum1)
			{
				cout<<"Given number is Strong number "<<endl;
				
			}
			else
			cout<<"Given number is not a strong number "<<endl;
		}
};
int main()
{
	int num;
	cout<<"Enter any number "<<endl;
	cin>>num;
	prime pr;
	pr.checknumber(num);
	perfect p;
	p.checknumber(num);
	Duck d;
	d.checknumber(num);
	strong s;
	s.checknumber(num);
}

