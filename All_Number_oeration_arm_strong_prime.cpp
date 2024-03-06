#include<iostream>
using namespace std;
class Value
{
  public:
    virtual void checkNumber()=0;	
};
class Prime:public Value
{
	int num;
	public:
		void setData(int n)
		{
			num=n;
		}
		void checkNumber()
		{
			int count=0;
			for(int i=1;i<=num;i++)
			{
				if(num%i==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				cout<<"Given number is a prime number "<<endl;
			}
			else
			{
				cout<<"Given number is not a prime number "<<endl;
			}
		}
};
class Perfect:public Value
{
	int num;
	public:
		void setData(int n)
		{
			num=n;
		}
		void checkNumber()
		{
			int sum=0,temp;
			temp=num;
			for(int i=1;i<=num;i++)
			{
				if(num%i==0)
				{
					sum=sum+i;
				}
			}
			if(temp==sum)
			{
				cout<<"Given number is a perfect number "<<endl;
			}
			else
			{
				cout<<"Given number is not a perfect number "<<endl;
			}
			
		}
};
class Duck:public Value
{
	int num;
	public:
		void setData(int n)
		{
			num=n;
		}
		void checkNumber()
		{
			int digit,flag=0;
			while(num!=0)
			{
				digit=num%10;
				if(digit==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"Given number is a duck number:"<<endl;
			}
			else
			{
				cout<<"Given number is not a duck number "<<endl;
			}
			
		}
};
class Strong:public Value
{
	int num;
	public:
		void setData(int n)
		{
			num=n;
		}
		void checkNumber()
		{
			int fact,sum=0,temp;
			temp=num;
			while(num!=0)
			{
				int digit=num%10;
				fact=1;
				for(int i=1;i<=digit;i++)
				{
					fact=fact*i;
				}
				num=num/10;
				sum=sum+fact;
			}
			if(sum==temp)
			{
				cout<<"Given number is strong number "<<endl;
			}
			else
			{
				cout<<"Given number is not a strong number "<<endl;
			}
			
		}
};
class Armstrong:public Value
{
	int num;
	public:
		void setData(int n)
		{
			num=n;
		}
		void checkNumber()
		{
			int count,temp,Sum=0;
			while(num!=0)
			{
				count++;
				num=num/10;
			}
			num=temp;
			while(num!=0)
			{
				int pow;
				int digit=num%10;
				pow=1;
				for(int i=1;i<=count;i++)
				{
					pow=pow*digit;
				}
				Sum=Sum+pow;
				num=num/10;
			}
			if(temp==Sum)
			{
				cout<<"Given number is armstrong number "<<endl;
			}
			else
			{
				cout<<"Given number is not a armstrong number "<<endl;
			}
		}
};
int main()
{
	int n;
	cout<<"Enter any number "<<endl;
	cin>>n;
	Prime p;
	p.setData(n);
	p.checkNumber();
	
	Perfect e;
	e.setData(n);
	e.checkNumber();
	
	Duck d;
	d.setData(n);
	d.checkNumber();
	
	Strong s;
	s.setData(n);
	s.checkNumber();
	
	Armstrong a;
	a.setData(n);
	a.checkNumber();
	
	
	
	
}
