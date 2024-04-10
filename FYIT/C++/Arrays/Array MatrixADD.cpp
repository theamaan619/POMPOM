#include<iostream>
using namespace std;
class Demo1
{
	public:
		int mat1[2][2],mat2[2][2],mat3[2][2],i,j;
	void A()
	{
		cout<<"Enter Mat1: "<<endl;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cin>>mat1[i][j];	
			}	
		}
		cout<<"Mat 2 : "<<endl;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cin>>mat2[i][j];
			}
		}	
		cout<<"Addition is: "<<endl;
		
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				mat3[i][j]=mat1[i][j] + mat2[i][j];
				
				cout<<mat3[i][j];	
			}
			cout<<endl;	
		}		
	}
};

int main()
{
	Demo1 d1;
	d1.A();
	return 0;
}
