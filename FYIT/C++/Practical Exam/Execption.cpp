#include<iostream>
using namespace std;
class Excep
{
	public:
	void E()
	{
	int x,y,t;
	cout<<"Enter the Number: "<<endl;
	cin>>x>>y;
	try
	{
		if(y==0)
		throw ;
		else
		{
			t=x/y;
			cout<<"Sum is = "<<t<<endl;	
		}	
		
	}	
		catch(int y)
		{
		cout<<"Cant Divided by Zero!"<<endl;	
		}	
	}	
	
	
};
int main()
{
	Excep obj;
	obj.E();
	return 0;
}
