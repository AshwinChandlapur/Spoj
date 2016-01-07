#include <stdio.h>

int main(void) {
	// your code here
	long long int a[10],b[10],c[10];
	int i,n;
	printf("Enter the Value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&a[i],&b[i]);
	}

	for(i=0;i<n;i++)
	{
		c[i]=a[i]*b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%lld\n",c[i]);
	}
	return 0;
}
