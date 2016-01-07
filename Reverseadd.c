#include <stdio.h>
 
int main()
{
	int t,i;
	scanf("%d",&t);
	int a[10],b[10],c[10],d[10],e[10],f[10];
	for(i=0;i<t;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
		d[i]=0;
		e[i]=0;
		f[i]=0;
	}
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	
  	 for(i=0;i<t;i++)
  	 {
  	 	c[i]=reverse(a[i]);
   		d[i]=reverse(b[i]);
   	}
   	for(i=0;i<t;i++)
   	{
   		e[i]=c[i]+d[i];
	}
	for(i=0;i<t;i++)
   	{
   		f[i]=reverse(e[i]);
   		printf("%d\n",f[i]);
	}
	
}
  
  int reverse(int n)
  {
  	int reverse=0;
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
 
   //printf("Reverse of entered number is = %d\n", reverse);
   return reverse;
 
   return 0;
}
