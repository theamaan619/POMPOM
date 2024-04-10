#include<iostream>
using namespace std;
class Demo1
{
	public:
	void A()
	{
		cout<<"Friend Class 1"<<endl;	
		
	}	
	friend class Demo2;
};
class Demo2
{
	public:
	void B(Demo1& x)
	{
		x.A();
	}	
	
	
};
int main()
{
	Demo1 d1;
	Demo2 d2;
	d2.B(d1);
	return 0;
}
