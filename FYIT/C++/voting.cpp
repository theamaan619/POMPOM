#include<iostream>
using namespace std;
class Table
{
	public:
	void show()
	{
		
		int a;
		cout<<"Enter your age: ";
		cin>>a;
			if(a>=18)
		{
			cout<<"You are Eligible for vote "<<endl;
		}
			else
		{
			cout<<"You are not Eligible for vote "<<endl;
		}
	}
};
int main()
{
	Table obj;
	obj.show();
	return 0;
}
