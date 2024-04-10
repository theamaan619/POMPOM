#include<iostream>
using namespace std;
class demo
{
	public:
		void add()
		{
			int a,b,total;
			cout<<"Enter the Number : "<<endl;
			cin>>a>>b;
			total=a-(-b);
			cout<<total;
		}
};
int main()
{
	demo d1;
	d1.add();
	return 0;
}
