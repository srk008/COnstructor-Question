#include<iostream>
using namespace std;
class duplicates{
protected:	
	int *ptr,flag=0;
	public:
 void setarray(int a[])
 {
 	
 	ptr=a;
 }
};
class removeduplicate:public duplicates
{
	public:
 void remove()
 {
 	for(int i=0;i<5;i++)
 	{
 		 for(int j=i+1;j<5;j++)
 		 {
 		 	if(ptr[i]==ptr[j])
 		 	{
 		 		flag++;
 		 		for(int k=j;k<5;k++)
 		 		{
 		 			ptr[j]=ptr[j+1];
				  }
			  }
		  }
	 }
	 for(int i=0;i<5-1;i++)
	 {
	 	cout<<ptr[i];
	 }
 }
};
main()
{
	removeduplicate a1;
	int a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	a1.setarray(a);
	a1.remove();
}

