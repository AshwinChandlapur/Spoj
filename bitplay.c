#include<stdio.h>
int main()
{
	int t,n[10],k[10];
	printf("Enter the No of Test Cases");
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		n[i]=0;
		k[i]=0;
	}
	for(int i=0;i<t;i++)
	{
		scanf("%d%d",&n[i],&k[i]);
	}
	return 0;
	
	
}


