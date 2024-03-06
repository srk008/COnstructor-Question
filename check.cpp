#include<iostream>
using namespace std;
#include<string.h>
class PalindromeApp
{
   int *ptr,len;
   char name[20];
   public:
   void set(int a[],int size,char n[])
   {
   	 ptr=a;
   	 len=size;
   	 strcpy(name,n);
   }	
   void checkPalindromeArray()
   {
   	int i,j,flag=1;
   	  for(i=0,j=len-1;i<(len/2);i++,j--)
   	  {
   	  	if(ptr[i]!=ptr[j])
   	  	{
   	  		flag=0;
   	  		break;
			 }
		 }
		 if(flag==1)
		 cout<<"Array is palimdrom"<<endl;
		 else
		 cout<<"Array is not palimdrom"<<endl;
   }
   void checkPalindromeArray1()
   {
   	  char w[30];
   	  int len=strlen(name),l,d=0;
   	  strrev(name);
   	  for(int i=0;i<=len;i++)
   	  {
   	  	l=0;
   	  	    if(name[i]==' ' || name[i]=='\0')
   	    	{
   	    		for(int j=i-1;j>=d;j--)
   	    		{
   	    			
   	    		w[l]=name[j];
   	    		l++;
				   }
   	  		   w[l]='\0';
   	  		   cout<<w<<" ";
   	  		   d=i+1;
			 }
   	  	
		 }
   }
};
int main()
{
	int a[5],size=5;
	char n[40];
	cout<<"ENter 5 value of array "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter any string "<<endl;
	_flushall();
	gets(n);
	PalindromeApp p;
	p.set(a,size,n);
	p.checkPalindromeArray();
	p.checkPalindromeArray1();
}
