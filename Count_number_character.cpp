#include<iostream>
using namespace std;
#include<string.h>
class Count
{
	char name[30];
	public:
		void setData(char name[])
		{
			strcpy(this->name,name);
		}
		void performOperation()
		{
			int count;
			for(char i='a';i<'z';i++)
			{
				count=0;
				for(int j=0;j<strlen(name);j++)
				{
					if(i==name[j] )
					{
					
						count++;
					}
				}
				if(count>0)
				cout<<i<<"\t"<<count<<endl;
			}
		}
};
int main()
{
	char w[30];
	cout<<"ENter your name"<<endl;
	gets(w);
	Count c;
	c.setData(w);
	c.performOperation();
}
