#include<iostream>
using namespace std;
class Increment
{
	int a,b,c;
	public:
		Increment()
		{
			a=0;
			b=0;
			c=0;
			
		}
		void operator ++()
		{
			++a;
			++b;
			++c;
			
		}
		void show()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
		}
};
int main()
{
	Increment r;
	++r;
	r.show();
}
