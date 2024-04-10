#include<iostream>
using namespace std;
class demo
{
	int a,b,total;
	public:
	void show()
	{
		cout<<"Enter the Numbers:- ";
		cin>>a>>b;
		try
		{
			if(b==0)
			throw b;
			else
			{
				total=a/b;
				cout<<"\n"<<total;
			}
		}
		catch (int x)
		{
			cout<<"Can't divide by "<<x;	
		}	
	}	
};
int main()
{
	demo d;
	d.show();
	return 0;
}
