#include<iostream>
using namespace std;
int main()
{
	int  press, car=0 , bike=0 ,vehicle=0 ,amount=0 ,del=0;
	while(true)
	{
	
	cout<<"PRESS"<<endl;
	cout<<"1 for Car : "<<endl;
	cout<<"2 for Bike : "<<endl;
	cout<<"3 total vehicle : "<<endl;
	cout<<"4 for total amount : "<<endl;
	cout<<"5 for delete data : "<<endl;
	cout<<endl<<endl;
	cin>>press;
	
	if(press==1)
	{
		vehicle=vehicle+1;
		amount=amount+100;
		car++;
	}
	else if(press==2)
	{
		vehicle=vehicle+1;
		amount=amount+50;
		bike++;
	}
	else if(press==3)
	{
		cout<<"\nTotal Vehicle = "<<vehicle;
		cout<<endl;
	}
	else if(press==4)
	{
		cout<<"\nTotal Amount = "<<amount;
		cout<<endl;
	}
	else if(press==5)
	{
		car=0;
		bike=0;
		vehicle=0;
		amount=0;
		cout<<"\nDelete Data = "<<del;
		cout<<endl;
	}
	else 
	{
		cout<<"Invalid Input";
		cout<<endl;
	}
	
}
	return 0;
}
