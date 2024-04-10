#include<iostream>
using namespace std;
class Number
{
	public:
	void number()
	{
		float a,b,c;
		cout<<"Enter the First Number:- ";
		cin>>a;
		cout<<"Enter the Second Number:- ";
		cin>>b;
		cout<<"Enter the Third Number:- ";
		cin>>c;
		if(a>b&&a>c)
		{
			cout<<"First Number is Greatest";
		}
		else if(b>c)
		{
			cout<<"Second Number is Greatest";
		}
		else if(a==b)
		{
			cout<<"First and Second Number is Equal";
		}
		else if(a==c)
		{
			cout<<"First and Third Number is Equal";
		}
		else if(c==b)
		{
			cout<<"Second and Third Number is Equal";
		}
		else if(a==b&&b==c&&c==a)
		{
			cout<<"All Number are Equal";
		}
		else
		{
			cout<<"Third Number is Greatest";
		}
	}
};
int main()
{
	Number d;
	d.number();
	return 0;
}
