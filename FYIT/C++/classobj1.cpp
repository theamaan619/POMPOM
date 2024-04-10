#include<iostream>
using namespace std;
class Demo
{
	public:
		void add(int a)
		{
		cout<<a<<endl;
		}
		void add1(int b)
		{
			cout<<b;
		}
};


int main()
{
	Demo d;
	d.add(2);
	d.add(2);
	
}
