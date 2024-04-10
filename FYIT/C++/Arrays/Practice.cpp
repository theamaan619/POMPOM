#include<iostream>
using namespace std;
class demo
{
	public:
	void a()
	{
		int size;
		cout<<"Enter the Value of the size of Array:- ";
		cin>>size;
		int a[size];
		int i;
		cout<<"Enter the Numbers:- ";
		for(i=0;i<size;i++)
		{
			cin>>a[i];
		}
		cout<<"The Numbers are:-";
		for(i=0;i<size;i++)
		{
			cout<<" "<<a[i];
		}
	}
};
int main()
{
	demo d1;
	d1.a();
	return 0;
}
