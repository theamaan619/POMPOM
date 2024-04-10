#include<stdio.h>
int a[10];
void search(int,int);
void main()
{
	int i,n,val;
	printf("Enter the number of element in array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %dth element in array: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the value to be searched: ");
	scanf("%d",&val);
	search(n,val);
}
void search(int n,int val)
{
	int i;
	for (i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			printf("value found at %dth position \n",i);
			break;
		}
	}
	if(i==n)
	printf("value not found");
	//return 0;
}
