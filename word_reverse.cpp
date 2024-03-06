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
		char name1[20];
	public:
	void setData(char name[])
	{
		strcpy(name1,name);
	}	
	
};
class MaxRepetative :public StringOperation,public Value
{
	char bh[30];
	public:
		void set(char name[])
		{
			strcpy(bh,name);
		}
		void performOperation()
		{
			
		//	int j=0;
		   int index=0;
		   char temp='\0';
			int count;
			cout<<"Input name is "<<bh<<endl;
		  for (int i = 0; bh[i] != '\0'; i++) 
        {
            count = 1;
            for (int j = i + 1; bh[j] != '\0'; j++) 
            {
                if (bh[i] == bh[j])
                {
                    count++;
                }
            }
            if (count > index) 
            { // Compare count with index
                index = count;
                temp = bh[i];
            }
        }
			cout<<"Max time occured char is  and number of time  "<<temp<<index<<endl;
		}
};
class WordReverse : public StringOperation,public Value
{
	char r[20],w[20];
	int d,z;
	public:
		void set(char n[])
		{
			strcpy(r,n);
		}
		void performOperation()
		{
			int j=0;
			while(name1[j]!='\0')
			{
				j++;
			}
			strrev(r);
			for(int i=0;i<j;i++)
			{
				if(r[i]==' ' || r[i]=='\0')
				{ 
				    z=0;
					for(int k=i-1;k>=d;k--)
					{
						w[z]=r[k];
						z++;
					}
				}
				w[z]='\0';
				cout<<w;
				d=i+1;
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
	r.set(name);
	r.performOperation();
	w.performOperation();
	

	
}
