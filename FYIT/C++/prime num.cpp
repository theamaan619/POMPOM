#include<iostream>
using namespace std;
class A
{
	public:
	void show()
	{
		int i,n,a;
		n=0;
		cout<<"ENTER ANY NUMBER"<<endl;
		cout<<"--> ";
		cin>>a;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				n++;
			}
		}
		if(n==2)
		{
			cout<<"THIS IS PRIME NUMBER";
		}
		else
		{
			cout<<"NOT PRIME NUMBER";
		}
	}
};
int main()
{
	A k;
	k.show();
	return 0;
}
