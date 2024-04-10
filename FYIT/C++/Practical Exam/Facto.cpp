#include<iostream>
using namespace std;
class Facto
{
	public:
	void F()
	{
		int n,f=1;
		cout<<"Enter the Facto Number: "<<endl;
		cin>>n;
		fact:
		if(n>0)
		{
			f=f*n;
			n--;
			goto fact;	
		}	
		cout<<"Factorial is: "<<f;
	}	
	
};
int main()
{
	Facto obj;
	obj.F();
	return 0;
}
