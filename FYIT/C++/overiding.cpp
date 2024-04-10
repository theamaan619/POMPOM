#include<iostream>
using namespace std;
class A
{
	public :
		void show1()
		{
			cout<<"Hello 1"<<endl;
		}
	
};
class B : public A
{
	public:
		void show2()
		{
			cout<<"Hello 2";
		}
};
int main()
{

	B b;
	b.show1();
	return 0;
}
