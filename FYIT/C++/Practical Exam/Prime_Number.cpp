#include<iostream>
using namespace std;
class Demo
{
	public:
	void A()
	{
		int i,n;
		cout<<"Enter the Number: "<<endl;
		cin>>n;
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				break;
			}	
		}	
		if(n==i)
		{
			cout<<"Prime Number!"<<endl;
		}
		else
		{
			cout<<"Not Prime Number!"<<endl;
		}
		
	}	
	
};
int main()
{
	Demo d;
	d.A();
	return 0;
}
