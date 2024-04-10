#include<iostream>
using namespace std;
class demo
{
	public:
	void show()
	{
		int a[3][3]= {{5,10,8},{15,20,9},{25,30,35}};
		int b[3][3]={{21,5,6},{5,2,6},{69,23,54}};
		int total[3][3];
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				total[i][j]=a[i][j]+b[i][j];
				cout<<total[i][j]<<ends;
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
