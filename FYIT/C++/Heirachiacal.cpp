#include<iostream>
using namespace std;
class Grandf
{
	public:
		void a()
		{
			cout<<"I am your grandfather";
		}
};
class Dad:public Grandf
{
	public:
		void b()
		{
			cout<<"I am your father";
		}
};
class Mom:public Grandf
{
	public:
		void c()
		{
			cout<<"I am your mom";
		}
};
class Son:public Grandf
{
	public:
		void d()
		{
			cout<<"I am your son";
		}
};
int main()
{
	Son obj;
	obj.a();
	return 0;
}
