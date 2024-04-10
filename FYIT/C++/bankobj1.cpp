#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
	private:
		int pin,amount;
		public:
			string name;
			int accno;
			void fill()
			{
				name="Steve";
				accno=123456789;
				pin=1221;
				amount=100000;
				
			}
			void show()
			{
				cout<<"Name= "<<name<<endl;
				cout<<"Account No.= "<<accno<<endl;
				cout<<"Pin= "<<pin<<endl;
				cout<<"amount= "<<amount<<endl;
			}
	
};
int main()
{
	
	Bank b;
	b.fill();
	b.show();
	cout<<"some one try access your account : "<<endl;
	cout<<b.name;
	cout<<b.pin;
	
	return 0;
}
