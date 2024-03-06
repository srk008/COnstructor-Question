#include<iostream>
using namespace std;
#include<string.h>
class String1
{
	char name[20];
	public:
		void setData(char na[])
		{
			strcpy(name,na);
		}
		void perform()
		{
			int index=0,count;
			char temp;
			for(int i=0;name[i]!='\0';i++)
			{
				count=0;
				for(int j=0;name[j]!='\0';j++)
			    {
			    	if(name[i]==name[j])
			    	{
			    		count++;
					}
				  }
				if(index<count)
				{
					index=count;
					temp=name[i];
				}    
			}
			cout<<"Maximum time occured character is "<<temp<<"  "<<index;
		}
};
int main()
{
	char na[30];
	cout<<"ENter any word "<<endl;
	cin>>na;
	String1 s;
	s.setData(na);
	s.perform();
}






