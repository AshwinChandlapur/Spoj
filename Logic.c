#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
//	int a1=2,a2=4,a3=11,a4=36,a5=147,a6=778,an=0;
	int n,an;
	printf("Enter a number");
	//scanf("%d",&n);
	while(scanf("%d",&n)<=7 && n>20)
	{
		exit(0);
}
	printf("The %d th term in the nequence is",n);
	an=fact(n)+pow(2,n)-n;
	printf("%d",an);
}

 
int fact(int n)
{
  int c,fact = 1;
  for (c = 1; c <= n; c++)
    fact = fact * c;
  return fact;
  
}
