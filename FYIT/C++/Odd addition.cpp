#include<iostream>
using namespace std;
class demo
{
	public:
	void odd()
	{
		int a=100,i,sum;
		for(i=0;i<=a;i++)
		{
		
		if(i%2==0)
		
			{
				sum=sum+i;
				cout<<sum<<endl;
			}
	    }
		
	}
};
int main()
{
	demo d1;
	d1.odd();
}
