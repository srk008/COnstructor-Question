#include<iostream>
using namespace std;
#include<string.h>
class StringOperation 
{
	public:
	virtual void performOperation()=0;
};
class Value 
{
	protected:
		char name1[20],name2[20];
	public:
	void setData(char name[])
	{
		strcpy(name1,name);
		strcpy(name2,name);
	}	
	
};
class MaxRepetative :public StringOperation,public Value
{
	public:
		void performOperation()
		{
		//	int j=0;
		   int index=0;
		   char temp;
			int count;
			for(int i=0;name1[i]!='\0';i++)
			{
				count=1;
				for(int j=i+1;name2[j]!='\0';j++)
				{
					cout<<name1<<endl;
					cout<<name2<<endl;
					if(name1[i]==name2[j])
					{
						count++;
						cout<<name1[i]<<endl;
					//	cout<<"I am from inside"<<endl;
					}
				}
				if(index<count)
				{
					index=count;
					temp=name1[i];
					cout<<temp<<"\t"<<count<<endl;
				}
			}
			cout<<"Max time occured char is "<<temp<<endl;
		}
};
class WordReverse : public StringOperation,public Value
{
	public:
		void performOperation()
		{
			int j=0;
			while(name1[j]!='\0')
			{
				j++;
			}
			for(int i=j-1;i>=0;i--)
			{
				cout<<name1[i];
			}
		}
	
};
int main()
{
	char name[20];
	cout<<"Enter any word"<<endl;
	cin>>name;
	WordReverse w;
	w.setData(name);
	MaxRepetative r;
	r.performOperation();
	w.performOperation();
	

	
}
