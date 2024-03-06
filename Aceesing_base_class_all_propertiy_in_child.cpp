#include<iostream>
using namespace std;
#include<string.h>
class Person
{
   protected:
   int age;
   char name[30];
   public:
    Person(char n[],int a)
	{
		strcpy(name,n);
		age=a;
	}	
	void show()
	{
		cout<<name<<"\t"<<age<<endl;
	}
};
class Teacher:public Person
{
  private:
   int salary;
   public:
   Teacher(char n[],int a,int s): Person(n, a),salary(s){
   }	
   void show()
   {
   	  Person::show();
   	  cout<<"Salary "<<salary<<endl;
   }
};
class Student:public Person
{
   private:
   int mark;
   public:
   Student(char n[],int a,int m):Person(n,a),mark(m){
   }	
   void show()
   {
   	  Person::show();
   	  cout<<mark<<endl;
   }
};
int main()
{
	Teacher t("namj",19,450);
	Teacher t1("jkl",30,890);
	t.show();
	t1.show();
	
	Student s("srk",23,90);
	s.show();
}
