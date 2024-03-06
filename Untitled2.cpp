#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	private:
		char n[20],nw[20];
		int len,k=0,d=0;
	public:
	void steData(char name[])
	{
	   strcpy(n,name);	
	}	
	void operation()
	{
		len=strlen(n);
		strrev(n);
		cout<<n<<endl;
		for(int i=0;i<=len;i++)
		{
			if(n[i]==' ' || n[i]=='\0')
			{
		    	k=0;
				for(int j=i-1;j>=d;j--)
				{
					nw[k]=n[j];
					k++;
					cout<<"Element is reversing "<<endl;
				}
			}
			nw[k]='\0';
			cout<<nw<<" ";
			d=i+1;
			
		}
	}
};
int main()
{
	char name[20];
	cout<<"Enter any string"<<endl;
	gets(name);
	string1 w;
	w.steData(name);
	w.operation();
}
