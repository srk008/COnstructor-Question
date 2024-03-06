#include<iostream>
using namespace std;
#include<string.h>
class Person
{
  private:
  int age;
  char name[30];
  public:
  Person(int a,char n[])
   {
  	age=a;
  	strcpy(name,n);
   }
   Person(Person &t)
   {
   	 this->age=t.age;
   	 strcpy(this->name,t.name);
	}	
	void show()
	{
		cout<<age<<"\t"<<name<<endl;
	}
};
int main()
{
	int a;
	char n[30];
	cout<<"ENter age and name"<<endl;
	cin>>a>>n;
	Person p(a,n);
	p.show();
	Person h(p);
	h.show();
}
