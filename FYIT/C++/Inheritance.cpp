#include<iostream>
using namespace std;
class A
{
	public:
	void show1()
	{
		cout<<"This is class A"<<endl;	
	}	
};
class B 
{
	public:
	void show2()
	{
		cout<<"This is class B"<<endl;	
	}	
};
class C :public B ,public A
{
	public:
	void show3()
	{
		cout<<"This is class C";	
	}	
};
int main()
{
	C obj;
	obj.show1();
	obj.show2();
	obj.show3();
	return 0;
}
