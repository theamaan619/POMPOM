#include<iostream>
using namespace std;
class Table
{
	public:
	void show()
	{
		
		int a,i;
		cout<<"Enter the Number : ";
		cin>>a;
		int total;
		for(i=1;i<=10;i++)
		{
			total=a*i;
			cout<<a<<" * "<<i<<" = "<<total<<endl;
		}
	}
};
int main()
{
	Table obj;
	obj.show();
	return 0;
}
