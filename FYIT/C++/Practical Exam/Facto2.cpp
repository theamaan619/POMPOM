#include<iostream>
using namespace std;
class Facto
{
	public:
	void F()
	{
		int n,f=1,i;
		cout<<"Enter the Factorial Number: "<<endl;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		cout<<f;	
	}	
	
};
int main()
{
	Facto obj;
	obj.F();
	return 0;
}
