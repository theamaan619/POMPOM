#include<iostream>
using namespace std;
class Demo
{
	
	public:
		int a,b;
	void D()
	{
		cout<<"Enter the Numbers: "<<endl;
		cin>>a>>b;
	}	
	friend void add(Demo d);
	
};
void add(Demo d)
{
	int c;
	c=d.a+d.b;
	cout<<"Total is= "<<c;
}
int main()
{
	Demo obj;
	obj.D();
	add(obj);
	return 0;
}
