#include<iostream>
using namespace std;
class Fibonacci
{
	public:
	void fibona()
	{
		int num,i,x,y,z;
		cout<<"Enter the Number Till You want to Print Series:- ";
		cin>>num;
		x=0;
		y=1;
		cout<<x<<ends<<y;
		for(i=1;i<=num;i++)
		{
			z=x+y;
			cout<<ends<<z<<ends;
			x=y;
			y=z;
		}
	}
};
int main()
{
	Fibonacci d;
	d.fibona();
	return 0;
}
