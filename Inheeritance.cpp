#include<iostream>
using namespace std;
class Interest
{
	protected:
	int amt,rate,duration;
	public:
	void setData(int a,int r,int d)
	{
		amt=a;
		rate=r;
		duration=d;
	}
};
class Find_Interest:public Interest
{
	public:
	void callculate()
	{
		int result;
		result=rate*amt*duration;
		cout<<"Your payable amount is "<<result<<endl;
	}
};
int main()
{
	int a,r,d;
	cout<<"ENter amount rate of interest and Duration "<<endl;
	cin>>a>>r>>d;
	Find_Interest f;
	f.setData(a,r,d);
	f.callculate();
	
}
