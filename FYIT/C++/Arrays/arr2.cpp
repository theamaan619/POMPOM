#include<iostream>
using namespace std;
class demo
{
	public:
	void show()
	{
		int a[3][2]= {{5,10},{15,20},{25,30}};
		int i,j;
		int b[3][2]= {{5,100},{15,67},{25,300}};
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=1;j++)
			{
				cout<<a[i][j]<<ends<<endl;
				cout<<b[i][j]<<ends;
			}
		}
	}
		
};
int main()
{
	demo d;
	d.show();
	return 0;	
}
