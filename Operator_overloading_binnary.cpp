#include<iostream>
using namespace std;
class Addition
{
	int a;
	public:
		void set(int n)
		{
			a=n;
		}
		void operator +(Addition t)
		{
			int result=this->a+t.a;
			cout<<"Addition is "<<result<<endl;
		}
};
int main()
{
	Addition add,add1;
	add.set(10);
	add1.set(30);
	add+add1;
}
