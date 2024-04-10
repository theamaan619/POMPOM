#include<iostream>
using namespace std;
class Fib
{
	public:
	void F()
	{
		int n,a=0,b=1,c,i;
		cout<<"Enter the Term: "<<endl;
		cin>>n;
		cout<<"Fibonaci series: "<<endl;
		for(i=0;i<=n;i++)
		{
			cout<<a;
			c=a+b;
			a=b;
			b=c;	
		}	
	}	
};
int main()
{
	Fib obj;
	obj.F();
	return 0;
}
